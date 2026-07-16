# 🌡️ DS18B20 Temperature Measurement

## 📖 Overview
This project demonstrates how to measure temperature using the **DS18B20 digital temperature sensor** with a microcontroller (e.g., Arduino). The sensor reads the ambient temperature and displays the measured value through the Serial Monitor.

## ✨ Features
- Real-time temperature measurement
- Digital communication using the OneWire protocol
- Temperature displayed in degrees Celsius (°C)
- Simple and easy-to-understand implementation

## 🛠️ Hardware Required
- Arduino Uno (or compatible board)
- DS18B20 Temperature Sensor
- 4.7 kΩ resistor (pull-up resistor)
- Breadboard
- Jumper wires

## 🔌 Wiring

| DS18B20 Pin | Arduino |
|-------------|---------|
| GND | GND |
| VCC | 5V |
| DATA | Digital Pin 2 |

**Note:** Connect a **4.7 kΩ resistor** between the DATA pin and VCC.

## 📚 Libraries Used
- OneWire
- DallasTemperature

Install these libraries through the Arduino Library Manager before uploading the code.

## ▶️ How It Works
1. The Arduino initializes communication with the DS18B20 sensor.
2. The sensor measures the current temperature.
3. The measured temperature is sent to the Serial Monitor.
4. The reading updates continuously.

## 📷 Example Output

```
Temperature: 24.56 °C
Temperature: 24.62 °C
Temperature: 24.68 °C
```

## 🚀 Getting Started
1. Connect the sensor according to the wiring diagram.
2. Install the required libraries.
3. Upload the code to the Arduino board.
4. Open the Serial Monitor.
5. Observe the temperature readings.

## 📄 License
This project is intended for educational purposes.
