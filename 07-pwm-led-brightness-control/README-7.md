# Day 7: PWM LED Brightness Control

## Project Description

This project uses an ESP32 to control the brightness of an LED using PWM.

A potentiometer is used as an analog input. The ESP32 reads the ADC value from the potentiometer, converts it into a PWM value, and changes the brightness of the LED based on the potentiometer position.

## Components Used

* ESP32 38-pin board
* Potentiometer module
* LED
* 220Ω resistor
* Jumper wires
* USB cable

## Wiring Flow

### Potentiometer

```text
VCC → 3.3V
GND → GND
OUT → GPIO 34
```

### LED

```text
GPIO 2 → 220Ω resistor → LED positive leg
LED negative leg → GND
```

## Concepts Learned

* PWM
* Analog input
* ADC reading
* `analogRead()`
* `analogWrite()`
* `map()`
* LED brightness control
* Function for printing readings
* Serial Monitor debugging

## PWM Logic

The ADC value is converted into a PWM value using this logic:

```text
ADC range: 0 to 4095
PWM range: 0 to 255
Brightness range: 0% to 100%
```

The LED brightness changes according to the PWM value. When the potentiometer value increases, the PWM value also increases, making the LED brighter.

## Mistakes Fixed

* I forgot to add `delay()`, so the Serial Monitor output was printing too fast.
* I had a naming issue in the function name and fixed it to make the code cleaner.
* I used a 220Ω resistor with the LED for current protection.
* I learned that LED brightness control uses PWM with `analogWrite()`, not normal ON/OFF control with `digitalWrite()`.

## Demo

A Serial Monitor screenshot, circuit photo, and short demo video are included in this folder.

Serial Monitor screenshot file:

```text
pwm-brightness-screenshot.png
```

Circuit photo file:

```text
pwm-brightness-photo.jpeg
```

Demo video file:

```text
pwm-brightness-demo.mp4
```

## Embedded Systems Relevance

This project shows how an ESP32 can control the intensity of an output device instead of only turning it ON or OFF.

PWM is used in many embedded systems for LED dimming, motor speed control, buzzer tones, and power control.

This lab is important because it combines analog input from a potentiometer with PWM output to control real hardware.
