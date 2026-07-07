# Connections
| XIAO ESP32-C3 | DHT22 |
|---------------|-------|
| 3V3           | VCC   |
| D0, D1, D2        | DATA  |
| GND           | GND   |

<img width="666" height="375" alt="image" src="https://github.com/user-attachments/assets/47c3dbe8-5b73-49ef-bec9-fe72c5aa5b11" />

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
