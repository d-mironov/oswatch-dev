#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>

#include <display/Arduino_GC9A01.h>
#include <Arduino_GFX.h>
#include <Arduino_GFX_Library.h>

#include "config.h"

Arduino_ESP32SPI *spi = new Arduino_ESP32SPI(DP_DC, DP_CS, DP_CLK, DP_MOSI);
Arduino_GC9A01 *display = new Arduino_GC9A01(spi, DP_RST, 2, true);
// Arduino_GFX *gfx = new Arduino_Canvas_3bit(240, 240, display, 0, 0);

void setup() {
    Serial.begin(BAUDRATE);
    // display->begin();
    // display->fillScreen(BLACK);
    display->begin();
    display->fillScreen(BLACK);
}

void loop() {
}
