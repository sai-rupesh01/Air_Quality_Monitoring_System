# 🌍 Air Quality Monitoring System

## 📖 About the Project
The **Air Quality Monitoring System** is an **embedded edge-computing project** designed to measure and display real-time **indoor air pollution** using an **MQ-135 sensor**. It also measures **temperature and humidity** using **DHT11**. This system operates **without internet connectivity** and processes all data locally using an **Arduino Uno**.

![Air Quality Monitoring System](image-link-here)

---

## 🚀 Features
- **Fully offline operation** with no need for internet connectivity.
- **Edge computing** for real-time air quality monitoring.
- **MQ-135 sensor** for detecting air pollutants (CO₂, NH₃, benzene, smoke, alcohol, etc.).
- **DHT11 sensor** for temperature and humidity measurement.
- **16x2 LCD Display (I2C)** for real-time data visualization.
- Alerts for **poor air quality** using LEDs or buzzers.

---

## 🔧 Components Used
- **Microcontroller**: Arduino Uno
- **Sensors**:
  - **MQ-135** (Air Quality Sensor)
  - **DHT11/DHT22** (Temperature & Humidity Sensor)
- **Display**: 16x2 LCD with I2C module
- **Power Supply**: 9V Battery or Adapter

---

## 🛠️ Setup Instructions
1. **Connect the sensors** to the Arduino Uno according to the circuit diagram.
2. **Upload the firmware** using Arduino IDE.
3. **Install necessary libraries**:
   ```bash
   Install DHT, MQ135, LiquidCrystal_I2C libraries
   ```
4. **Assemble the components** into an enclosure for deployment.
5. **View real-time air quality, temperature, and humidity readings** on the LCD display.
6. **Set alerts** to trigger a buzzer or LED for poor air quality.

---

## 📡 Data Visualization
- **LCD Display (I2C)** for instant data output.
- **LED or buzzer alerts** for bad air quality.

---

## 📌 Usage
- **Indoor Air Quality Monitoring** 🏡
- **Smart Homes & Workspaces** 🏠
- **Industrial Air Pollution Monitoring** 🏭
- **Classrooms & Public Spaces** 🏫

---

## 📜 License
This project is **open-source** and available under the **MIT License**.

---

## 🏗️ Future Enhancements
- **Battery/Solar-powered Air Quality Station** ☀️🔋
- **Additional gas sensors for wider pollutant detection** 🏭
- **Data logging with SD card for long-term analysis** 📊

---

## 🤝 Contributing
Feel free to contribute by submitting issues or pull requests. 💡

---

## 📞 Contact
For queries and collaboration, reach out at **[your-email@example.com]**.

🌱 Let's build a cleaner and healthier indoor environment together! 🌍
