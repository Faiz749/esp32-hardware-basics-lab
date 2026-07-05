# Day 12: OLED Status Dashboard

## Project Description

This project uses an ESP32 to display DHT11 sensor data on a 0.96 inch I2C OLED display.

The ESP32 reads temperature and humidity from the DHT11 sensor and shows the values on the OLED screen.

## Components Used

* ESP32 38-pin board
* 0.96 inch I2C OLED display
* DHT11 sensor/module
* Jumper wires
* USB cable

## Wiring Flow

OLED Display:

```text
VCC → 3.3V
GND → GND
SDA → GPIO 21
SCL → GPIO 22
```

DHT11:

```text
VCC → 3.3V
GND → GND
DATA → GPIO 4
```

## Concepts Learned

* I2C communication
* OLED display output
* DHT11 sensor reading
* `display.begin()`
* `display.clearDisplay()`
* `display.setCursor()`
* `display.print()`
* `display.println()`
* `display.display()`
* Failed reading handling
* Dashboard layout design

## Status Logic

```text
Temperature >= 35 C OR Humidity >= 80% → WARNING
Otherwise → NORMAL
```

## Mistakes Fixed

* I wrote `colour` instead of `color` while working with the OLED display code.
* I fixed the spelling because the OLED library uses American spelling like `setTextColor()`.
* I found out that my OLED display is 128x64, so the screen height should be set to 64.
* I learned that OLED text must fit inside the 128x64 display area.
* I learned that `display.display()` is needed to actually show the text on the OLED.
* I kept the dashboard simple so the OLED could clearly show temperature, humidity, and status.

## Demo

An OLED dashboard photo is included in this folder.

OLED dashboard photo file:

```text
oled-dashboard-photo.jpeg
```

## Embedded Systems Relevance

This project teaches how an ESP32 can display sensor information on a local hardware dashboard.

This lab is important because it moves the project from only Serial Monitor output to a real hardware user interface.
