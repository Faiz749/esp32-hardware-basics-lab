# Day 2: Button Controlled LED

## Project Description

This project uses an ESP32 to read a push button and control an external LED.

When the button is pressed, the LED turns ON.

When the button is released, the LED turns OFF.

## Components Used

* ESP32 38-pin board
* Breadboard
* LED
* 330Ω resistor
* Push button
* Jumper wires
* USB cable

## Wiring Flow

LED:

```text
GPIO 2 → 330Ω resistor → LED positive leg → LED negative leg → GND
```

Button:

```text
GPIO 4 → push button → GND
```

## Concepts Learned

* Digital input
* Digital output
* `digitalRead()`
* `digitalWrite()`
* `INPUT_PULLUP`
* Inverted button logic
* `if-else`
* Serial Monitor debugging

  
## Mistakes Fixed

* I learned that `INPUT_PULLUP` makes the button logic inverted.
* I learned that with `INPUT_PULLUP`, the button reads `LOW` when pressed and `HIGH` when released.
* I also learned that a smaller delay makes the button response feel better.
* I changed the delay from a larger value to `200 ms` because a long delay made the button response feel slow.

## Demo

A short 5-second demo video and circuit photo are included in this folder.

Demo video file:

```text
button-led-demo.mp4
```

Circuit photo file:

```text
button-led-photo.jpeg
```

## Embedded Systems Relevance

This project teaches how an ESP32 reads a real-world input and controls a physical output.

This is the basic idea behind switches, alarms, control panels, and automation systems.
