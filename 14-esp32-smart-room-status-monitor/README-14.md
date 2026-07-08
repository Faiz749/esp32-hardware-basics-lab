# Day 14: ESP32 Smart Room Status Monitor

## Project Description

This project uses an ESP32 to create a simple smart room monitoring system.

The system reads temperature and humidity from a DHT11 sensor and reads light condition from a digital LDR module.

Based on the sensor readings, the ESP32 shows the room status on the Serial Monitor, turns ON an alert when the climate condition is unsafe, and turns ON an LED when the room is dark.

## Components Used

* ESP32 38-pin board
* DHT11 sensor/module
* Digital LDR module
* Buzzer
* LED
* 220Ω resistor
* Jumper wires
* USB cable

## Wiring Flow

DHT11:

```text
VCC → 3.3V
GND → GND
DATA → GPIO 4
```

Digital LDR Module:

```text
VCC → 3.3V
GND → GND
DO → GPIO 34
```

Buzzer:

```text
Buzzer positive leg → GPIO 5
Buzzer negative leg → GND
```

LED:

```text
GPIO 2 → 220Ω resistor → LED positive leg
LED negative leg → GND
```

## Concepts Learned

* DHT11 sensor reading
* Digital LDR sensor reading
* `digitalRead()`
* `digitalWrite()`
* `readTemperature()`
* `readHumidity()`
* `isnan()`
* Sensor failure handling
* System status logic
* Alert output control
* Automatic LED control
* Functions
* Serial Monitor dashboard

## System Logic

Climate status:

```text
Temperature >= 35 C OR Humidity >= 80% → WARNING
Otherwise → NORMAL
```

Alert logic:

```text
System Status: WARNING → Alert ON
System Status: NORMAL  → Alert OFF
```

Light logic:

```text
Light Status: DARK   → Light LED ON
Light Status: BRIGHT → Light LED OFF
```

For my digital LDR module:

```text
LDR State LOW  → BRIGHT
LDR State HIGH → DARK
```

## Mistakes Fixed

* I learned how to combine multiple sensors and outputs in one project.
* I made sure the DHT11 failed reading check was included using `isnan()`.
* I made sure the buzzer alert depends on the system status.
* I made sure the light LED depends only on the LDR light status.
* I learned that the final dashboard should clearly show sensor values, system status, alert status, and LED status.
* I kept the final project focused on integration instead of adding WiFi or OLED again.

## Demo

A circuit photo, Serial Monitor screenshot, and short demo video are included in this folder.

Circuit photo file:

```text
smart-room-monitor-photo.jpeg
```

Serial Monitor screenshot file:

```text
smart-room-monitor-screenshot.png
```

Demo video file:

```text
smart-room-monitor-demo.mp4
```

## Embedded Systems Relevance

This project combines multiple embedded system concepts into one smart room monitoring system.

It uses real sensor inputs, decision-making logic, and physical output control.

Systems like this are used in smart rooms, safety monitors, environmental monitoring, automation systems, and IoT devices.

This final Course 1 project is important because it shows integration: reading sensors, processing conditions, controlling outputs, and displaying a clear system dashboard.
