# Day 4: Non-Blocking LED Timer

## Project Description
This project uses an ESP32 to blink an external LED without using `delay()`.
The LED turns ON and OFF every 500 ms.
The timing is controlled using `millis()`.

## Components Used
* ESP32 38-pin board
* Breadboard
* LED
* 330Ω resistor
* Jumper wires
* USB cable

## Wiring Flow
LED:

```text
GPIO 2 → 330Ω resistor → LED positive leg → LED negative leg → GND
```

## Concepts Learned
* Digital output
* `digitalWrite()`
* `millis()`
* Non-blocking timing
* `HIGH` and `LOW`
* LED state toggling
* Serial Monitor debugging

## Output
When the LED turns ON:

```text
---------------------
Uptime: 8 sec
LED STATE: ON
Blink Interval: 500 ms
---------------------
```

When the LED turns OFF:

```text
---------------------
Uptime: 9 sec
LED STATE: OFF
Blink Interval: 500 ms
---------------------
```
The LED turns ON and OFF every 500 ms without using `delay()`.

## Mistakes Fixed
* I first wrote `mills()` instead of `millis()`.
* I wrote `low` instead of `LOW`.
* I learned that Arduino constants like `HIGH` and `LOW` must be uppercase.
* I also learned that changing a state variable is not enough. The LED must be updated using `digitalWrite()`.

## Demo
A Serial Monitor screenshot and circuit photo are included in this folder.

Serial Monitor screenshot file:

```text
non-blocking-led-screenshot.png
```

Circuit photo file:

```text
non-blocking-led-photo.jpeg
```

## Embedded Systems Relevance
This project teaches how to use non-blocking timing with `millis()`.

This is important because embedded systems often need to handle multiple tasks at the same time, such as reading sensors, checking buttons, updating displays, and controlling outputs without freezing the program.