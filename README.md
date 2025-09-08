# OGMA Multidevice Emulator

## Purpose
The purpose of this emulator (hardware and software) is to help the community develop and test software that interacts with OpenOGMA astronomy equipment without having to spend money purchasing the actual equipment.

This repository has been forked from the **Adafruit Feather RP2040 PCB** design.

The original Feather RP2040 board is **open hardware**, licensed under Creative Commons Attribution-ShareAlike (CC BY-SA). See `license.txt` for Adafruit’s original license terms. All attribution to Adafruit Industries is preserved, as required.

This fork extends the Feather RP2040 by providing:
- A **protocol emulator** that can simulate astronomy accessories such as:
  - **Filter Wheel** (FW)
  - **Focuser** (FC)
  - **Rotator** (RT)
- **OLED FeatherWing** display to show the command's feedback in real time.
- **Open firmware** (TinyUSB + Arduino) that enumerates as a **USB CDC ACM device** (`ttyACM*`).

This allows developers to test interoperability and astronomy drivers (INDI, ASCOM, Alpaca, etc.) and see the behavior simulation on the small OLED screen without owning the actual physical hardware.

## What's included

- **Open hardware schematics**: This repo includes Adafruit’s original EagleCAD schematic and board files for the Feather RP2040, licensed CC BY-SA with modifications to improve the developer experience.
- **Open firmware source code**: Contains the emulator firmware, licensed under GPLv3.
- **Documentation**: This README describes how to use the device.

## USB Interface

When flashed with the emulator firmware, the Emulator enumerates as:

```bash
$ lsusb
1209:XXXX  OGMAVision OGMA Multi-Device Emulator.
2e8a:000a  Raspberry Pi Pico (during development)
```

## How to use

In theory, you should be able to flash any OpenOgma firmware on this device and use it to debug code without owning the actual device.

## Disclaimer

This device is a work in progress.

If you find any issues or want to implement a functionality, please fork the repository and submit a pull request with your changes.

## Licence

Hardware files derived from Adafruit Feather RP2040. Licensed CC BY-SA.

Firmware and documentation created for the OGMA Emulator are licensed under GPLv3.

---

***Note: The following text was included in the original README file, and it is kept here as is:***

## Adafruit-Feather-RP2040-PCB

![Feather RP2040](https://cdn-shop.adafruit.com/970x728/4884-05.jpg)

Open source PCB files for Feather RP2040

PCB format is EagleCAD schematic and board layout

For more details, check out the product pages at

   * https://www.adafruit.com/products/4884

**We are releasing these files so folks can start creating custom designs based on the RP2040 chip. This design has been built and tested successfully**

Adafruit invests time and resources providing this open source design, please support Adafruit and open-source hardware by purchasing products from Adafruit!

Designed by Adafruit Industries.
Creative Commons Attribution, Share-Alike license, check license.txt for more information
All text above must be included in any redistribution
