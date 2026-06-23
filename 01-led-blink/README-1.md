# Day 1: LED Blink

## Project Description
This project uses an ESP32 to blink an external LED.

## Components Used
- ESP32 38-pin board
- Breadboard
- LED
- 330Ω resistor
- Jumper wires
- USB cable

## Wiring flow:
GPIO 2 → 330Ω resistor → LED positive leg → LED negative leg → GND

## Concepts Learned
- `setup()` runs once when the ESP32 starts
- `loop()` runs forever
- `pinMode()` sets a pin as input or output
- `digitalWrite()` turns a pin HIGH or LOW
- `delay()` pauses the program
- `Serial.println()` prints messages on Serial Monitor

## Output
The LED turns ON for 1 second and OFF for 1 second repeatedly.

## Demo
A photo and 5-second demo video are included in this folder.

## Embedded Systems Relevance
This project teaches basic GPIO output. The ESP32 controls a physical LED using code.