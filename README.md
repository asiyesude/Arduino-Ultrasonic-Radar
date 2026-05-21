# Arduino Ultrasonic Radar Simulation 

A software-hardware co-design project simulating a basic radar proximity alert system. Developed using Tinkercad Circuits, this project processes real-time distance data from an ultrasonic sensor to trigger an autonomous hardware alarm when an object breaches a critical threshold.

##  Components Used
- **Microcontroller:** Arduino Uno R3
- **Sensor:** HC-SR04 Ultrasonic Distance Sensor (4-pin)
- **Actuator:** Red LED & 220 Ohm Resistor
- **Prototyping:** Breadboard & Jumper Wires

##  How It Works
- The Arduino triggers the ultrasonic sensor (`TRIG` pin) to emit high-frequency sound waves.
- The sensor listens for the bounce-back (`ECHO` pin) and calculates the time elapsed.
- Using the kinematic formula ($X = V \times T$), the algorithm converts time into distance (cm).
- **Defense Algorithm:** If an object is detected within a **50 cm** range, the system automatically triggers the LED pin to initiate a visual threat alarm.

##  Source Code
The embedded C++ algorithm can be found in the `radar_simulation.ino` file within this repository.
