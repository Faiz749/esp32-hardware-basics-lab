# ESP32 Hardware Basics Lab

## Overview

This repository contains my first ESP32 hardware basics course.

The goal of this course was to build a practical foundation in embedded systems by working with real components, writing code, testing circuits, fixing mistakes, and documenting each project properly.

I did not want to only copy code. I wanted to understand what each project was doing and how the ESP32 was interacting with real hardware.

## What I Worked With

During this course, I used:

* ESP32 38-pin development board
* Breadboard
* LEDs
* Push button
* Potentiometer module
* Digital LDR module
* Buzzer
* DHT11 temperature and humidity sensor
* 0.96 inch I2C OLED display
* Jumper wires
* USB cable

## Tools Used

* Arduino IDE
* Serial Monitor
* Git
* GitHub

## Projects Completed

| Day    | Project                         | Main Concept                                       |
| ------ | ------------------------------- | -------------------------------------------------- |
| Day 1  | LED Blink                       | Basic GPIO output                                  |
| Day 2  | Button Controlled LED           | Digital input and `INPUT_PULLUP`                   |
| Day 3  | Serial Debug Monitor            | Debugging with Serial Monitor                      |
| Day 4  | Non-Blocking LED Timer          | Timing using `millis()`                            |
| Day 5  | Potentiometer ADC Reader        | Analog input and ADC values                        |
| Day 6  | ADC Voltage Threshold System    | ADC to voltage conversion                          |
| Day 7  | PWM LED Brightness Control      | PWM and brightness control                         |
| Day 8  | Button Toggle Debounce System   | Toggle logic and debounce                          |
| Day 9  | Buzzer Alert System             | State-based alert logic                            |
| Day 10 | Digital LDR Auto Light System   | Digital sensor input                               |
| Day 11 | DHT11 Climate Monitor           | Temperature, humidity, and failed reading handling |
| Day 12 | OLED Status Dashboard           | OLED display and I2C output                        |
| Day 13 | Simple Local Web Server         | WiFi and local web page                            |
| Day 14 | ESP32 Smart Room Status Monitor | Final sensor integration project                   |

## Main Things I Learned

I learned how to use ESP32 GPIO pins to control outputs like LEDs and buzzers.

I also learned how to read inputs from push buttons, potentiometers, digital sensor modules, and the DHT11 sensor.

Some important concepts I practiced were:

* `digitalWrite()`
* `digitalRead()`
* `analogRead()`
* `analogWrite()`
* `millis()`
* `map()`
* `INPUT_PULLUP`
* debounce logic
* PWM
* sensor threshold logic
* failed sensor reading handling
* OLED display output
* basic WiFi web server

## Important Learning Moments

One important thing I learned was that real hardware does not always behave like tutorials. For example, my LDR module only had a digital output pin, so I had to use `digitalRead()` instead of `analogRead()`.

I also learned that DHT11 readings can fail, so checking with `isnan()` is important before using the values.

The WiFi web server was one of the harder parts of this course. It took more time because I wanted to understand the concept instead of just copying the code. I learned that the ESP32 connects to WiFi, gets an IP address, receives a browser request, and sends back an HTTP/HTML response.

## Final Project

The final project of this course was:

```text
ESP32 Smart Room Status Monitor
```

This project combined multiple parts from the course:

* DHT11 for temperature and humidity
* Digital LDR for light status
* Buzzer for alert output
* LED for automatic room light
* Serial Monitor as the system dashboard

Example output:

```text
---------------------
ESP32 Smart Room Monitor
Temperature: 26.30C
Humidity: 45.00%
Light Status: DARK
System Status: NORMAL
Alert: OFF
Light LED: ON
---------------------
```

This final project helped me understand how multiple sensors and outputs can work together in one embedded system.

## Repository Structure

```text
esp32-hardware-basics-lab/
├── 01-led-blink/
├── 02-button-controlled-led/
├── 03-serial-debug-monitor/
├── 04-non-blocking-led-timer/
├── 05-potentiometer-adc-reader/
├── 06-adc-voltage-threshold-system/
├── 07-pwm-led-brightness-control/
├── 08-button-toggle-debounce/
├── 09-buzzer-alert-system/
├── 10-digital-ldr-auto-light-system/
├── 11-dht11-climate-monitor/
├── 12-oled-status-dashboard/
├── 13-simple-local-web-server/
├── 14-esp32-smart-room-status-monitor/
└── README.md
```

## Notes

Real WiFi credentials are not included in this repository.

For the WiFi project, I replaced the actual WiFi name and password with placeholders before pushing the code to GitHub.

Each folder contains the project code, README, and proof files such as photos, screenshots, or videos where needed.

## What This Course Gave Me

This course gave me a strong beginner foundation in ESP32 and embedded systems.

I learned how to connect components, write code, debug problems, understand sensor behavior, document mistakes, and build small working systems.

The biggest lesson was that embedded systems are not only about code. Wiring, timing, sensor behavior, debugging, and documentation are also part of the work.

## Next Step

The next step is Course 2, where I will build a more complete ESP32 IoT Environment Monitor.

Course 2 will focus on cleaner code structure, better system states, OLED dashboard improvements, web dashboard with sensor data, non-blocking timing, and a more polished portfolio project.
