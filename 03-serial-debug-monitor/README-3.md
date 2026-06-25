# Day 3: Serial Debug Monitor

## Overview
This lab uses the ESP32 Serial Monitor to print a clean system debug report every 1 second.

The program displays the system state, uptime, fake temperature value, and temperature status.

## Components Used
- ESP32 38-pin board
- USB cable

## Circuit Connections
No external circuit was used in this lab.
The ESP32 was connected to the computer using a USB cable.

## How It Works
* The ESP32 starts Serial Monitor communication at 115200 baud.
* A fake temperature value starts at 25 C and increases by 1    every second.
* The program uses `millis()` to calculate how long the ESP32 has been running.
* The temperature status is decided using this logic:

```text
Fake Temperature <= 30 C → NORMAL
Fake Temperature > 30 C  → WARNING

## Sample Output

```text
-------------------------
System: READY
Uptime: 5 sec
Fake Temperature: 31 C
Status: WARNING
-------------------------