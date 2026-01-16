# Gas Monitoring and Safety System

An Arduino-based gas monitoring and safety system designed to detect gas leakage and activate safety mechanisms. This project was completed as part of an academic course team assignment.

## Project Overview
The system continuously monitors gas concentration and ambient light levels. When gas levels exceed a predefined threshold, the system activates a buzzer and ventilation fan to ensure safety. A warning LED is activated only in low-light conditions to alert users.

## My Contribution
- Developed and tested the complete Arduino code controlling sensors and actuators
- Implemented logic for gas threshold detection and light-dependent warnings
- Integrated system components: gas sensor, LDR, buzzer, LED, and fan
- Simulated the system to verify proper functionality before submission

## Features
- Real-time gas leakage detection
- Automatic buzzer alarm
- Ventilation fan activation upon high gas concentration
- Light-sensitive warning LED

## Tools and Technologies
- Arduino
- Arduino IDE
- Gas Sensor
- LDR (Light Dependent Resistor)
- NPN Transistor
- Simulation software

## Status
Simulation-based testing completed. The project demonstrates functionality as a prototype and academic proof-of-concept.

## How to Use
1. Open `src/gas_monitoring_system.ino` in Arduino IDE
2. Upload code to Arduino board (or use simulation software)
3. Connect gas sensor, buzzer, LED, and fan according to circuit diagram
4. Run the system and monitor gas detection behavior

## License
This project is for educational purposes and is not intended for commercial use.
