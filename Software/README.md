# Connections
| XIAO ESP32-C3 | DHT22 |
|---------------|-------|
| 3V3           | VCC   |
| D0, D1, D2        | DATA  |
| GND           | GND   |

<img width="666" height="375" alt="image" src="https://github.com/user-attachments/assets/47c3dbe8-5b73-49ef-bec9-fe72c5aa5b11" />

# Software Preparation
- Add ESP32 board package to your Arduino IDE. Navigate to File > Preferences, and fill "Additional Boards Manager URLs" with the url below: https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json

Navigate to Tools > Board > Boards Manager..., type the keyword esp32 in the search box, select the latest version of esp32, and install it.
