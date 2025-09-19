import requests
from bs4 import BeautifulSoup
import streamlit as st

def get_weather(city):
    try:
        city = city.replace(" ", "-")
        url = f"https://www.timeanddate.com/weather/pakistan/{city.lower()}"
        
        response = requests.get(url, headers={"User-Agent": "Mozilla/5.0"})
        if response.status_code != 200:
            return None, None
        
        soup = BeautifulSoup(response.text, "html.parser")
        temp_tag = soup.find("div", class_="h2")
        temp = temp_tag.text.strip() if temp_tag else None
        condition_tag = soup.find("p")
        condition = condition_tag.text.strip() if condition_tag else "N/A"
        
        return temp, condition
    
    except Exception as e:
        return None, f"Error: {e}"

st.title("🌤️ Live Weather Checker")
City = st.text_input("Enter a city in Pakistan:", "Faisalabad")
if st.button("Check Weather"):
    temp, condition = get_weather(City)
    if temp:
        st.success(f"Current weather in **{City.capitalize()}**")
        st.write(f"Temperature: **{temp}**")
        st.write(f"Condition: **{condition}**")
    else:
        st.error(f"Could not fetch weather for {City}. Please try another city.")
