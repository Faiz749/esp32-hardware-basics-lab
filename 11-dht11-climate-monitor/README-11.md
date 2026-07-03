# Day 11: DHT11 Climate Monitor

## Project Description

This project uses an ESP32 to read temperature and humidity from a DHT11 sensor.

The program prints the temperature, humidity, and climate status on the Serial Monitor. It also handles failed sensor readings.

## Components Used

* ESP32 38-pin board
* DHT11 sensor/module
* Jumper wires
* USB cable

## Wiring Flow

DHT11:

```text
VCC → 3.3V
GND → GND
DATA → GPIO 4
```

## Concepts Learned

* DHT11 sensor reading
* Temperature measurement
* Humidity measurement
* DHT library
* `readTemperature()`
* `readHumidity()`
* `isnan()`
* Failed reading handling
* Threshold logic
* Serial Monitor debugging

## Output

When the climate status is normal:

```text
Temperature: 30.00 C
Humidity: 26.00%
Status: NORMAL
```

Another normal reading:

```text
Temperature: 29.30 C
Humidity: 28.00%
Status: NORMAL
```

When the sensor reading fails:

```text
Failed to read from DHT11 sensor
```

## Status Logic

```text
Temperature >= 35 C OR Humidity >= 80% → WARNING
Otherwise → NORMAL
```

## Mistakes Fixed

* I had a spelling mistake in `isnan()` and wrote it as `isan`.
* I fixed the spelling so failed sensor reading handling worked correctly.
* I forgot to add `delay()`, so the Serial Monitor output was printing too fast.
* I learned that DHT11 should not be read too quickly, so I used `delay(2000)`.
* I learned that real sensors can sometimes fail, so the code should check invalid readings before printing values.

## Demo

A Serial Monitor screenshot and circuit photo are included in this folder.

Serial Monitor screenshot file:

```text
dht11-climate-screenshot.png
```

Circuit photo file:

```text
dht11-climate-photo.jpeg
```

## Embedded Systems Relevance

This project teaches how an ESP32 reads real environmental data from a sensor.

Temperature and humidity monitoring is used in smart rooms, weather stations, agriculture systems, storage monitoring, and IoT dashboards.

This lab is important because it shows how to read real sensor data and handle failed readings properly.
