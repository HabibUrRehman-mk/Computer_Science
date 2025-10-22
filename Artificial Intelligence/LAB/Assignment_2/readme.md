# 🚗 Image Processing & Object Detection App

This is a **Streamlit-based Image Processing and Object Detection web app** that combines the power of **YOLO** and **OpenCV** to perform multiple computer vision tasks easily from your browser.

---

## 📂 Project Structure
Image processing and Car Detection/
│
├── app.py # Main Streamlit web app
├── models/
│ └── best.pt # Trained YOLO model for vehicle detection
├── Training/
│ ├── dataset/ # Contains images and labels for training
│ └── train_yolo.py # Script used to train YOLO model
├── requirements.txt # Python dependencies
└── README.md # Project documentation



---

## 🧠 Features

### 1. **Vehicle Detection (YOLO-based)**
- The app includes a **trained YOLO model** capable of detecting:
  - 🚑 **Ambulance**
  - 🚌 **Bus**
  - 🚗 **Car**
  - 🏍️ **Motorcycle**
  - 🚚 **Truck**

- You can adjust the **confidence threshold** to control detection precision and recall.

### 2. **Face Detection (OpenCV)**
- Uses Haar Cascade classifiers to detect **human faces** in an image.

### 3. **Cat Detection (OpenCV)**
- Detects **cat faces** using OpenCV’s built-in cascade models.

### 4. **Gaussian Blur**
- Apply a **custom adjustable blur** using OpenCV’s `GaussianBlur`.

---

## ⚙️ How It Works

1. Upload an image or paste an image URL.
2. Choose an operation:
   - Gaussian Blur
   - Detect Human Faces
   - Detect Cars (YOLO)
   - Detect Cats
3. Click **Run** to process the image.
4. View the output instantly and download the processed image.

---

## 🧰 Tech Stack

- **Python 3.8+**
- **Streamlit** – Interactive UI
- **OpenCV** – Image processing & classic object detection
- **YOLO (Ultralytics)** – Deep learning–based object detection
- **Pillow (PIL)** – Image conversion and manipulation
- **NumPy** – Array operations

---

## 🏋️‍♂️ YOLO Training Information

The YOLO model used (`models/best.pt`) was trained using the scripts inside the `Training/` folder.

- The dataset includes labeled images for multiple vehicle types.
- Training script: `train_yolo.py`
- Model type: YOLO (Ultralytics)
- Detected classes:
  - Ambulance
  - Bus
  - Car
  - Motorcycle
  - Truck

---

## ▶️ How to Run Locally

```bash
# 1. Clone the project
git clone https://github.com/HabibUrRehman-mk/Computer_Science/tree/main/Artificial%20Intelligence/LAB/Assignment_2
cd vehicle-detection-app

# 2. Install dependencies
pip install -r requirements.txt

# 3. Run the app
streamlit run app.py
