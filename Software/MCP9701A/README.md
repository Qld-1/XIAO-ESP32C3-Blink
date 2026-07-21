# 🌡️ MCP9701A Temperature Sensor
<img width="640" height="640" alt="image" src="https://github.com/user-attachments/assets/720589a8-d395-4a55-9d4a-eb09f6063d4b" />

## 📖 Overview
This project demonstrates how to measure temperature using the **MCP9701A analog temperature sensor** with a microcontroller (e.g., Arduino). The sensor outputs an analog voltage proportional to the ambient temperature, which is converted into a temperature value in degrees Celsius.

## ✨ Features
- Real-time temperature measurement
- Analog voltage reading
- Temperature displayed in degrees Celsius (°C)
- Simple implementation using the built-in ADC

## 🛠️ Hardware Required
- Arduino Uno (or compatible board)
- MCP9701A Temperature Sensor
- Breadboard
- Jumper wires

## 🔌 Wiring

| MCP9701A Pin | Arduino |
|--------------|---------|
| VCC | 5V |
| VOUT | A0 |
| GND | GND |

<img width="214" height="254" alt="image" src="https://github.com/user-attachments/assets/18ba6931-7ca0-47ac-bc17-fa7cedd78f60" />


## 📚 Libraries Used
No external libraries are required.

## ▶️ How It Works
1. The Arduino reads the analog voltage from the MCP9701A sensor.
2. The analog value is converted into a voltage.
3. The voltage is converted into a temperature value using the sensor's characteristics.
4. The measured temperature is displayed in the Serial Monitor.

## 📷 Example Output

```
Temperature: 23.8 °C
Temperature: 24.1 °C
Temperature: 24.0 °C
```

## 🚀 Getting Started
1. Connect the MCP9701A sensor according to the wiring table.
2. Upload the Arduino code to the board.
3. Open the Serial Monitor.
4. Observe the live temperature readings.

## 📄 License
This project is intended for educational purposes.
