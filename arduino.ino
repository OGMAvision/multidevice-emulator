/*
    OpenOGMA Multiemulator Firmware
    Copyright (C) 2025  OGMAVision

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>          // FeatherWing (SH1107)

Adafruit_SH1107 display(64, 128, &Wire); // rotate as needed

void setup() {
  Serial.begin(115200); while(!Serial && millis() < 3000) {}
  Wire.begin();
  display.begin(0x3C, true);          // FeatherWing typically 0x3C
  display.clearDisplay();
  display.setTextSize(1); display.setTextColor(1);
  display.setCursor(0,0); display.println("OGMA Emulator"); display.display();
}

void loop() {
  if (Serial.available()) {
    String line = Serial.readStringUntil('\n'); line.trim();
    // Parse: MODE FW|FC|RT, CALIBRATE, POS n, FOCUS s, ROT d, STATUS, GET_STATE...
    // Update internal state and show on OLED:
    display.clearDisplay(); display.setCursor(0,0);
    display.println(line);  // e.g., "FW POS 3" or "RT 90"
    display.display();
    Serial.println("OK");   // respond per your text protocol
  }
}
