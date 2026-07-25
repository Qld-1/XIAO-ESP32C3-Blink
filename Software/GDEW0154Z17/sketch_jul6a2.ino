#include <Arduino.h>
#include <SPI.h>

#include <GxEPD.h>
#include <GxGDEW0154Z17/GxGDEW0154Z17.h>
#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>

// Пинове (промени ги според твоя ESP32-C3)
static constexpr int8_t EPAPER_RST  = D0;
static constexpr int8_t EPAPER_CS   = D1;
static constexpr int8_t EPAPER_DC   = D3;
static constexpr int8_t EPAPER_BUSY = D5;
static constexpr int8_t EPAPER_SCK  = D8;
static constexpr int8_t EPAPER_MISO = D9;
static constexpr int8_t EPAPER_MOSI = D10;

GxIO_Class io(SPI, EPAPER_CS, EPAPER_DC, EPAPER_RST);
GxEPD_Class epaper(io, EPAPER_RST, EPAPER_BUSY);

void setup()
{
    Serial.begin(115200);

    SPI.begin(EPAPER_SCK, EPAPER_MISO, EPAPER_MOSI, EPAPER_CS);

    epaper.init();
    epaper.setRotation(0);

    epaper.fillScreen(GxEPD_WHITE);

    epaper.setTextColor(GxEPD_BLACK);
    epaper.setTextSize(2);

    epaper.setCursor(20, 80);
    epaper.print("Hello World");

    epaper.update();
    epaper.powerDown();
}

void loop()
{
}