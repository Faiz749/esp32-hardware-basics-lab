# Day 6: ADC Voltage Threshold System

## Project Description
This project uses an ESP32 to read an analog value from a potentiometer and convert it into voltage.

The program reads the raw ADC value from the potentiometer, calculates the voltage, and prints the voltage status on the Serial Monitor.

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
* Voltage conversion
* `analogRead()`
* Floating point calculation
* Threshold logic
* Functions
* Serial Monitor debugging

## Output
When the voltage is low:

```text
ADC: 500
Voltage: 0.40 V
Status: LOW
```

When the voltage is safe:

```text
ADC: 2048
Voltage: 1.65 V
Status: SAFE
```

When the voltage is high:

```text
ADC: 3700
Voltage: 2.98 V
Status: HIGH
```

## Status Logic
The voltage value is classified using this logic:

```text
Voltage < 1.0V   → LOW
1.0V to 2.5V     → SAFE
Voltage > 2.5V   → HIGH
```

## Mistakes Fixed
* I learned that the ADC value must be converted using a floating point calculation.
* I used `4095.0` instead of only `4095` so the voltage calculation gives proper decimal values.
* I made sure all variable and function names were correct.
* I made sure function names were different from variable names.

## Demo
A Serial Monitor screenshot and circuit photo are included in this folder.

Serial Monitor screenshot file:

```text
voltage-threshold-screenshot.png
```

Circuit photo file:

```text
voltage-threshold-photo.jpeg
```

## Embedded Systems Relevance
This project teaches how to convert raw ADC readings into useful engineering values.

In real embedded systems, sensors usually provide raw values first. The microcontroller then converts those values into meaningful units like voltage, temperature, distance, or percentage.

