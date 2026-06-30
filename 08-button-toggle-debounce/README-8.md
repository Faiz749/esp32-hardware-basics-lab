# Day 8: Button Toggle Debounce System

## Project Description
This project uses an ESP32 to toggle an LED using a push button.
Each valid button press changes the LED state. If the LED is OFF, one press turns it ON. If the LED is ON, the next press turns it OFF.
The project also uses debounce logic to prevent one physical press from being counted multiple times.

## Components Used

* ESP32 38-pin board
* Push button
* LED
* 220Ω or 330Ω resistor
* Jumper wires
* USB cable

## Wiring Flow

LED:

```text
GPIO 2 → 220Ω or 330Ω resistor → LED positive leg
LED negative leg → GND
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
* Toggle logic
* Debounce using `millis()`
* Press counter
* Serial Monitor debugging

## Output

When the button is pressed once:

```text
Button Press Detected
LED STATUS: ON
Press Count: 1
```

When the button is pressed again:

```text
Button Press Detected
LED STATUS: OFF
Press Count: 2
```

## Mistakes Fixed

* I had a spelling mistake in `LEDStatus` and fixed the name so it matched everywhere in the code.
* I forgot to write `digitalWrite()`, so the LED state variable changed but the actual LED did not update.
* I forgot to update `previousButtonState = ButtonState;`, so the program could not properly compare the old and new button states.
* I learned that toggle logic needs both the previous button state and the current button state.

## Demo
A Serial Monitor screenshot, circuit photo, and short demo video are included in this folder.

Serial Monitor screenshot file:

```text
button-toggle-screenshot.png
```

Circuit photo file:

```text
button-toggle-photo.jpeg
```

Demo video file:

```text
button-toggle-demo.mp4
```

## Embedded Systems Relevance

This project teaches how to handle real physical button input reliably.

Button toggle and debounce logic are used in many embedded systems such as control panels, alarms, menu buttons, mode selectors, and user interfaces.

This lab is important because it shows how one physical input can be converted into one clean software event.
