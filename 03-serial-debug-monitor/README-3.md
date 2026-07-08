# Day 3: Serial Debug Monitor

## Project Description

This project uses the ESP32 Serial Monitor to print a clean system debug report every 1 second.

The program displays the system state, uptime, fake temperature value, and temperature status.

## Components Used

* ESP32 38-pin board
* USB cable
* Arduino IDE Serial Monitor

## Wiring Flow

No external circuit was used in this lab.

The ESP32 was connected to the computer using a USB cable.

## Concepts Learned

* Serial Monitor debugging
* `Serial.begin()`
* `Serial.print()`
* `Serial.println()`
* `millis()`
* Uptime calculation
* Fake sensor value
* Threshold logic
* Status messages

## How It Works

The ESP32 starts Serial Monitor communication at 115200 baud.

A fake temperature value starts at 25 C and increases by 1 every second.

The program uses `millis()` to calculate how long the ESP32 has been running.

The temperature status is decided using this logic:

```text
Fake Temperature <= 30 C → NORMAL
Fake Temperature > 30 C  → WARNING
```

## Output

When the fake temperature is normal:

```text
-------------------------
System: READY
Uptime: 3 sec
Fake Temperature: 28 C
Status: NORMAL
-------------------------
```

When the fake temperature becomes high:

```text
-------------------------
System: READY
Uptime: 5 sec
Fake Temperature: 31 C
Status: WARNING
-------------------------
```

## Mistakes Fixed

* I learned how to print a clean debug report on the Serial Monitor.
* I learned that `millis()` gives the time since the ESP32 started running.
* I converted `millis()` into seconds by dividing it by `1000`.
* I learned that formatting Serial Monitor output clearly makes debugging easier.

## Demo

A Serial Monitor screenshot is included in this folder.

Serial Monitor screenshot file:

```text
serial-debug-screenshot.png
```

## Embedded Systems Relevance

This project teaches how to use the Serial Monitor for debugging and system reporting.

In embedded systems, Serial Monitor is useful because it helps show what the microcontroller is reading, calculating, and deciding while the program is running.
