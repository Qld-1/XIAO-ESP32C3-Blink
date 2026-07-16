# RGB LED (4-Pin)
<img width="600" height="600" alt="led-diode-rgb-4-pin-600x600_0" src="https://github.com/user-attachments/assets/71cca1bc-b896-45d3-80b4-63c744168f97" />

## Description

This project demonstrates how to control a 4-pin RGB LED using a microcontroller such as an Arduino. An RGB LED contains three individual LEDs—Red, Green, and Blue—which can be combined to produce a wide range of colors using PWM (Pulse Width Modulation).

## Features
Independent control of the Red, Green, and Blue channels.
Create multiple colors by mixing RGB values.
Smooth color transitions using PWM.
Easy to integrate into Arduino and embedded systems projects.
Pin Configuration

The 4-pin RGB LED typically has the following pins:

- Red (R)
- Common (Anode or Cathode)
- Green (G)
- Blue (B)


**Note:**  Make sure to identify whether your RGB LED is **Common Anode** or **Common Cathode**, as the control logic is different.




## Connections
| XIAO ESP32-C3 | DHT22 |
|---------------|-------|
| 3V3           | VCC   |
| D0, D1, D2        | DATA  |
| GND           | GND   |

<img width="7680" height="4320" alt="image" src="https://github.com/user-attachments/assets/b621c715-c85b-475f-a3ee-b52432f1c660" />


# Software Preparation
### Ardoino IDE

- Add ESP32 board package to your Arduino IDE. Navigate to File > Preferences, and fill "Additional Boards Manager URLs" with the url below: https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json

Navigate to Tools > Board > Boards Manager..., type the keyword esp32 in the search box, select the latest version of esp32, and install it.


### Setup ESP32-C3 in Visual Studio Code

### Install PlatformIO

1. Open **Visual Studio Code**.
2. Go to **Extensions** (`Ctrl + Shift + X`).
3. Search for **PlatformIO IDE**.
4. Install the extension.
5. Restart Visual Studio Code.

### Create ESP32-C3 Project

1. Open **PlatformIO Home**.
2. Select **New Project**.
3. Enter a project name.
4. Select board:
5. 5. Select framework:
6. 6. Click **Finish**.

### PlatformIO Configuration

The `platformio.ini` file should contain:

```ini
[env:seeed_xiao_esp32c3]
platform = espressif32
board = seeed_xiao_esp32c3
framework = arduino
monitor_speed = 115200
