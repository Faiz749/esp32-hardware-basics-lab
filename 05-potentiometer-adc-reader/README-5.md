# Day 5: Potentiometer ADC Reader

## Project Description

This project uses an ESP32 to read analog values from a potentiometer module.
The ESP32 reads the potentiometer output using an ADC pin and prints the raw ADC value, percentage, and level on the Serial Monitor.

## Components Used

* ESP32 38-pin board
* Potentiometer module
* Jumper wires
* USB cable

## Wiring Flow

Potentiometer:

```text
VCC → 3.3V
GND → GND
OUT → GPIO 34
```

## Concepts Learned

* Analog input
* ADC reading
* `analogRead()`
* `map()`
* Percentage conversion
* Threshold logic
* Serial Monitor debugging

## Level Logic

The percentage value is classified using this logic:

```text
0–30%     → LOW
31–70%    → MEDIUM
71–100%   → HIGH
```

## Mistakes Fixed

* I wrote `System.print()` instead of `Serial.print()`, which caused an error because Arduino uses `Serial` for Serial Monitor output.
* I used `Serial.print()` instead of `Serial.println()` in some places, so the output was not moving to the next line properly.
* I forgot to add `delay()`, so the Serial Monitor output was printing too fast.
* I learned that `analogRead()` needs the ADC pin name inside the brackets. The correct format is `analogRead(POTPIN)`.

## Demo

A Serial Monitor screenshot and circuit photo are included in this folder.

Serial Monitor screenshot file:

```text
potentiometer-screenshot.png
```

Circuit photo file:

```text
potentiometer-photo.jpeg
```

## Embedded Systems Relevance

This project teaches how the ESP32 reads changing analog values from real hardware.
Many sensors work in a similar way, such as LDR sensors, gas sensors, joystick modules, and other analog modules.

