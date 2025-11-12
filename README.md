# Arduino_DHT11_Project
This is a class work for temperature and humidity monitoring

Project Summary: Arduino-Based Temperature and Humidity Monitoring System

This project focuses on designing and simulating a temperature and humidity monitoring system using an Arduino Uno and a DHT11 sensor in Proteus ISIS 9 Professional. The main goal is to demonstrate how a microcontroller can collect environmental data in real time, process it, and make automatic decisions.

The Arduino Uno (ATmega328P) acts as the brain of the system. It reads data from the DHT11 sensor, which measures both temperature and relative humidity. The Arduino processes this data and compares it to preset comfort levels — typically 20–30 °C for temperature and 40–60 % for humidity.

If the readings fall within the good range, a green LED turns on to indicate a comfortable environment. If either value goes out of range, a red LED lights up to alert the user. The system also sends the readings to a virtual terminal in Proteus, showing live updates of temperature and humidity readings in digital form.

The project was fully simulated in Proteus, confirming that all components — the Arduino Uno, DHT11 sensor, LEDs, and virtual terminal — worked together correctly. The design demonstrated real-time data acquisition, processing, and decision-making.

This simple, low-cost, and energy-efficient system (costing under MWK 25,000) is highly applicable in homes, schools, hospitals, and farms across Malawi. It can control fans, monitor greenhouse and mushroom house environments, and even send SMS or Wi-Fi alerts when critical temperature or humidity levels are reached.
