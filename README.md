# Humidity-Controlled Fan System

## Overview

This project is a simple Arduino-based system that controls a fan based on the humidity level detected by a DHT11 sensor. When the humidity level exceeds a predefined threshold, the fan is turned on to reduce the humidity to a comfortable level. This can be particularly useful in environments where maintaining a certain humidity level is critical, such as in greenhouses or storage rooms.

## Requirements

- **Hardware:**
  - Arduino board (Uno, Mega, Nano, etc.)
  - DHT11 humidity and temperature sensor
  - Fan (compatible with Arduino voltage and current specifications)
  - Breadboard and jumper wires

- **Software:**
  - Arduino IDE
  - DHT sensor library

## Installation

### Hardware Setup

1. **Connect the DHT11 Sensor:**
   - Connect the VCC pin of the DHT11 sensor to the 5V pin on the Arduino.
   - Connect the GND pin to one of the GND pins on the Arduino.
   - Connect the data pin of the DHT11 sensor to pin A0 on the Arduino.

2. **Connect the Fan:**
   - Connect the positive terminal of the fan to pin 5 on the Arduino through a transistor if needed to handle the current.
   - Connect the negative terminal of the fan to one of the GND pins on the Arduino.

### Software Setup

1. **Install the Arduino IDE:** Download and install the Arduino IDE from the official Arduino website.

2. **Install the DHT Sensor Library:**
   - Open the Arduino IDE.
   - Go to `Sketch` > `Include Library` > `Manage Libraries...`
   - Search for "DHT sensor library" and install it.

3. **Load and Configure the Sketch:**
   - Copy the provided C++ code into a new sketch in the Arduino IDE.
   - Make sure to adjust the `DHTPIN` and `FAN_PIN` definitions if you've connected your components to different pins.
   - Adjust the `threshold` variable if you wish to change the humidity level at which the fan activates.

## Usage

- Upload the sketch to your Arduino board using the Arduino IDE.
- The system will automatically start monitoring the humidity level.
- The serial monitor will display the current humidity level and the state of the fan ("Fan on" or "Fan off").
- The fan will turn on when the humidity level exceeds the set threshold and turn off when the humidity drops below the threshold.

## Note

This project is designed for educational purposes and provides a basic example of how to control devices based on sensor inputs using an Arduino. It can be expanded with additional features such as temperature-based control, remote monitoring, or integration with home automation systems.
