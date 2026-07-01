# Day 9: Buzzer Alert System

## Project Description
This project uses an ESP32 to create a simple buzzer alert system.

The potentiometer is used as a fake sensor. The ESP32 reads the sensor value, classifies it into NORMAL, WARNING, or DANGER state, and turns the buzzer ON only in the DANGER state.

## Components Used
* ESP32 38-pin board
* Potentiometer module
* Buzzer
* Jumper wires
* USB cable

## Wiring Flow

Potentiometer:

```text
VCC → 3.3V
GND → GND
OUT → GPIO 34
```

Buzzer:

```text
Buzzer positive leg → GPIO 5
Buzzer negative leg → GND
```

## Concepts Learned

* Analog input
* ADC reading
* `analogRead()`
* `map()`
* Digital output
* `digitalWrite()`
* State-based logic
* Buzzer control
* Alert system design
* Functions
* Serial Monitor debugging


## State Table
```text
Sensor Range       State      Buzzer
0% to 40%          NORMAL     OFF
41% to 70%         WARNING    OFF
71% to 100%        DANGER     ON
```

## Mistakes Fixed

* I fixed spacing in the Serial Monitor print statements so the output looked cleaner.
* I had a naming mistake in the code and fixed the names so they matched properly.
* I forgot to add `delay()`, so the Serial Monitor output was printing too fast.
* I learned that the buzzer should only turn ON in the DANGER state.
* I learned that a state table makes the alert logic easier to understand before coding.

## Demo

A Serial Monitor screenshot, circuit photo, and short demo video are included in this folder.

Serial Monitor screenshot file:

```text
buzzer-alert-screenshot.png
```

Circuit photo file:

```text
buzzer-alert-photo.jpeg
```

Demo video file:

```text
buzzer-alert-demo.mp4
```

## Embedded Systems Relevance

This project teaches how to design a simple alert system using sensor values and output control.

State-based logic is used in many embedded systems such as gas alarms, fire alarms, and other sensor-based safety systems.

This lab is important because it shows how raw sensor-style input can trigger a real-world warning output.
