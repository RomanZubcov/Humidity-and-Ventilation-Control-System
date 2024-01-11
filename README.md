Humidity and Ventilation Control System for Garage with Arduino

The operating principle of this project is to monitor the humidity level in a garage and ventilate the space when the humidity level becomes too high. This project uses an Arduino board to read the humidity level in the garage and control the fan based on this reading.

Before starting the project, you need to connect a humidity sensor to the Arduino board and connect a fan to a digital pin on the board. Then, you can begin programming the Arduino board to read the humidity level and control the fan.

The first step in programming the Arduino board is to read the humidity level from the sensor connected to pin A0 and store it in a variable. Then, check if the humidity level is higher than a set threshold, and if it is, turn on the fan connected to the digital pin.

If the humidity level drops below the set threshold, stop the fan and resume reading the humidity level. To ensure continuous operation of the device, the program runs in an infinite loop.

In conclusion, by monitoring the humidity level and controlling the fan, this device can ensure a suitable environment in the garage, preventing the growth of mold and thus protecting the objects and equipment stored inside.

To create this project, the following components are required:

1.Arduino board
2.Humidity sensor DHT 11
3.Fan 5v (Evercool 25x25x10mm 5 Volt)
4.Resistors
5.Connection cables(jumpers)
6.Breadboard.
