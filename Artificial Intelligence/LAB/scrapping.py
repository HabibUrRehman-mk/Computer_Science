import requests
from bs4 import BeautifulSoup
url = "https://zellbury.com/collections/men-blended-collection"


response = requests.get(url)
soup = BeautifulSoup(response.text, "html.parser")


product_links = set()
for a in soup.select("h3.card__heading a"):
    link = a["href"]
    full_link = "https://zellbury.com" + link
    product_links.add(full_link)

with open("product_links.txt", "w", encoding="utf-8") as f:
    for link in product_links:
        f.write(link + "\n")











import requests
from bs4 import BeautifulSoup
import openpyxl

with open("product_links.txt", "r", encoding="utf-8") as f:
    product_links = [line.strip() for line in f if line.strip()]

wb = openpyxl.Workbook()
ws = wb.active
ws.title = "Products"
ws.append(["SKU", "Product Name", "Color"])

for link in product_links:
    url = link
    print(f"Scraping: {url}")
    response = requests.get(url)
    soup = BeautifulSoup(response.text, "html.parser")
    
    #SKU
    sku_tag = soup.select_one("span.product-sku")
    sku = sku_tag.get_text(strip=True) if sku_tag else "N/A"
    
    
    #Product Name 
    name_tag = soup.select_one("div.product__title h1") or soup.select_one("div.product__title h2")
    name = name_tag.get_text(strip=True) if name_tag else "N/A"
    
    # Colors
    colors = []
    for color_input in soup.select('fieldset input[type="radio"][name="Color"]'):
        color = color_input.get("value")
        if color:
            colors.append(color)
    if colors:
        for color in colors:
            ws.append([sku, name, color])
    else:
        ws.append([sku, name, "N/A"])

# Save Excel file
wb.save("products.xlsx")
print(" Data saved to products.xlsx")

