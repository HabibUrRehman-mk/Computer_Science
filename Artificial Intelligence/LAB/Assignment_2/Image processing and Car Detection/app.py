import io
import os
import cv2
import numpy as np
import streamlit as st
from PIL import Image
from ultralytics import YOLO

MODEL_PATH = "models/best.pt"

def pil_to_cv2(img_pil: Image.Image) -> np.ndarray:
    img = np.array(img_pil.convert("RGB"))
    return cv2.cvtColor(img, cv2.COLOR_RGB2BGR)

def cv2_to_pil(img_cv2: np.ndarray) -> Image.Image:
    img_rgb = cv2.cvtColor(img_cv2, cv2.COLOR_BGR2RGB)
    return Image.fromarray(img_rgb)

def apply_gaussian_blur(img: np.ndarray, ksize: int) -> np.ndarray:
    if ksize < 1:
        ksize = 1
    if ksize % 2 == 0:
        ksize += 1
    return cv2.GaussianBlur(img, (ksize, ksize), 0)

def draw_boxes_opencv(img_bgr: np.ndarray, boxes, labels, confs=None) -> np.ndarray:
    out = img_bgr.copy()
    for i, box in enumerate(boxes):
        x1, y1, x2, y2 = map(int, box)
        color = (0, 255, 0)
        cv2.rectangle(out, (x1, y1), (x2, y2), color, 2)
        label = labels[i]
        if confs is not None:
            label_text = f"{label} {confs[i]:.2f}"
        else:
            label_text = label
        (w, h), _ = cv2.getTextSize(label_text, cv2.FONT_HERSHEY_SIMPLEX, 0.6, 1)
        cv2.rectangle(out, (x1, y1 - 20), (x1 + w, y1), color, -1)
        cv2.putText(out, label_text, (x1, y1 - 5), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 0, 0), 1, cv2.LINE_AA)
    return out

def run_yolo_detection(img_bgr: np.ndarray, model: YOLO, conf: float = 0.25, imgsz: int = 640):
    img_rgb = cv2.cvtColor(img_bgr, cv2.COLOR_BGR2RGB)
    results = model.predict(source=img_rgb, imgsz=imgsz, conf=conf, verbose=False)
    res = results[0]
    boxes, labels, confs = [], [], []
    if hasattr(res, "boxes") and len(res.boxes) > 0:
        xyxy = res.boxes.xyxy.cpu().numpy()
        cls_idxs = res.boxes.cls.cpu().numpy().astype(int)
        confs = res.boxes.conf.cpu().numpy().tolist()
        names = model.names if hasattr(model, "names") else {}
        for i, b in enumerate(xyxy):
            boxes.append(b.tolist())
            labels.append(names.get(cls_idxs[i], str(cls_idxs[i])))
    out_img = draw_boxes_opencv(img_bgr, boxes, labels, confs)
    detections = [{"xyxy": b, "label": labels[i], "conf": confs[i]} for i, b in enumerate(boxes)]
    return out_img, detections

haar_face = cv2.CascadeClassifier(cv2.data.haarcascades + "haarcascade_frontalface_default.xml")
cat_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + "haarcascade_frontalcatface.xml")
if cat_cascade.empty():
    cat_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + "haarcascade_frontalcatface_extended.xml")

yolo_model = None
if os.path.exists(MODEL_PATH):
    try:
        yolo_model = YOLO(MODEL_PATH)
    except Exception:
        yolo_model = None
else:
    yolo_model = None

st.set_page_config(page_title="Image Operations", layout="centered")
st.title("Image Processing & Object Detection")

left, right = st.columns([1, 1])

with left:
    uploaded = st.file_uploader("Upload image (jpg/png)", type=["jpg", "jpeg", "png"])
    url = st.text_input("Or paste image URL (optional)")
    operation = st.selectbox("Operation", ["Gaussian Blur", "Detect Human Faces", "Detect Cars (YOLO)", "Detect Cats"])
    blur_amount = None
    if operation == "Gaussian Blur":
        blur_amount = st.slider("Blur amount (kernel size)", 1, 51, 11, 2)
    conf_thresh = None
    if operation == "Detect Cars (YOLO)":
        conf_thresh = st.slider("YOLO confidence threshold", 0.05, 0.95, 0.25, 0.01)
    run = st.button("Run")

with right:
    st.markdown("### Preview / Result")
    preview_box = st.empty()

img_cv2 = None
if uploaded is not None:
    try:
        img_pil = Image.open(uploaded).convert("RGB")
        img_cv2 = pil_to_cv2(img_pil)
    except Exception as e:
        st.error(f"Cannot read uploaded image: {e}")
elif url:
    import requests
    try:
        resp = requests.get(url, timeout=10)
        img_pil = Image.open(io.BytesIO(resp.content)).convert("RGB")
        img_cv2 = pil_to_cv2(img_pil)
    except Exception as e:
        st.error(f"Could not download image: {e}")

if img_cv2 is None:
    preview_box.info("Upload an image or provide a URL, then click Run.")
else:
    preview_box.image(cv2_to_pil(img_cv2), caption="Original", use_container_width=True)

if run and img_cv2 is not None:
    out_img = img_cv2.copy()
    if operation == "Gaussian Blur":
        k = int(blur_amount) if blur_amount is not None else 11
        if k % 2 == 0:
            k += 1
        out_img = apply_gaussian_blur(out_img, k)
    elif operation == "Detect Human Faces":
        gray = cv2.cvtColor(out_img, cv2.COLOR_BGR2GRAY)
        faces = haar_face.detectMultiScale(gray, scaleFactor=1.1, minNeighbors=5, minSize=(30, 30))
        boxes = [[int(x), int(y), int(x + w), int(y + h)] for (x, y, w, h) in faces]
        labels = ["Person"] * len(boxes)
        out_img = draw_boxes_opencv(out_img, boxes, labels)
    elif operation == "Detect Cats":
        gray = cv2.cvtColor(out_img, cv2.COLOR_BGR2GRAY)
        cats = cat_cascade.detectMultiScale(gray, scaleFactor=1.05, minNeighbors=3, minSize=(30, 30))
        boxes = [[int(x), int(y), int(x + w), int(y + h)] for (x, y, w, h) in cats]
        labels = ["Cat"] * len(boxes)
        out_img = draw_boxes_opencv(out_img, boxes, labels)
    elif operation == "Detect Cars (YOLO)":
        if yolo_model is None:
            st.error(f"No YOLO model found at {MODEL_PATH}. Place your model at that path.")
            st.stop()
        conf_value = float(conf_thresh) if (conf_thresh is not None) else 0.25
        try:
            out_img, _ = run_yolo_detection(out_img, yolo_model, conf=conf_value, imgsz=640)
        except Exception as e:
            st.error(f"YOLO detection failed: {e}")
            st.stop()

    result_pil = cv2_to_pil(out_img)
    preview_box.image(result_pil, caption="Result", use_container_width=True)
    buf = io.BytesIO()
    result_pil.save(buf, format="JPEG")
    byte_im = buf.getvalue()
    st.download_button("Download", data=byte_im, file_name="result.jpg", mime="image/jpeg")

st.markdown(
    """
    <p style="text-align:center;">
        Made with ❤️ by 
        <a href="mailto:mail.habiburrehman@gmail.com" style="text-decoration:none; color:#ff4b4b;">
            mail.habiburrehman@gmail.com
        </a>
    </p>
    """,
    unsafe_allow_html=True
)
