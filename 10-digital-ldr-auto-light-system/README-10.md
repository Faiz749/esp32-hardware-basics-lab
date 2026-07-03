# Day 10: Digital LDR Auto Light System

## Project Description
This project uses an ESP32 to create an automatic light control system using a digital LDR module.

The LDR module gives a digital output signal. The ESP32 reads this signal and turns an LED ON when it is dark and OFF when it is bright.

## Components Used
* ESP32 38-pin board
* Digital LDR module
* LED
* 220Ω resistor
* Jumper wires
* USB cable

## Wiring Flow
Digital LDR Module:

```text
VCC → 3.3V
GND → GND
DO → GPIO 34
```

LED:

```text
GPIO 2 → 220Ω → LED positive leg
LED negative leg → GND
```

## Concepts Learned

* Digital input
* Digital output
* `digitalRead()`
* `digitalWrite()`
* Digital sensor module
* LDR threshold adjustment
* Automatic light control
* Functions
* Serial Monitor debugging

## Output
When the LDR is exposed to light:

```text
LDR State: 0
Light Status: Bright
LED: OFF
```

When the LDR is covered:

```text
LDR State: 1
Light Status: Dark
LED: ON
```

## Mistakes Fixed

* I first thought the LDR module was analog, but it only had `DO`, so I used `digitalRead()` instead of `analogRead()`.
* I learned that my digital LDR module gives `LOW` in bright light and `HIGH` in darkness.
* I kept `delay(500)` so the Serial Monitor output stayed readable and did not print too fast.
* I learned that the threshold is adjusted using the screw on the LDR module.
* I learned that digital LDR modules give only `HIGH` or `LOW`, not ADC values from 0 to 4095.

## Demo

A Serial Monitor screenshot, circuit photo, and short demo video are included in this folder.

Serial Monitor screenshot file:

```text
digital-ldr-auto-light-screenshot.png
```

Circuit photo file:

```text
digital-ldr-auto-light-photo.jpeg
```

Demo video file:

```text
digital-ldr-auto-light-demo.mp4
```

## Embedded Systems Relevance

This project teaches how an ESP32 can make automatic decisions using a digital sensor input.

Automatic light control is used in street lights, smart rooms, energy-saving systems, and home automation projects.

This lab is important because it shows how a digital sensor module can control a real output device automatically.
