# iot-smart-driver-drowsiness-detection

An IoT-based driver drowsiness detection system, with real-time monitoring using IR sensor and alerting via GSM module controlled by Arduino UNO to prevent accidents.

## Features
- Real-time monitoring of driver alertness
- Eye-blink detection using IR sensors
- Steering wheel grip pressure monitoring
- Buzzer alerts and seat vibration feedback
- Automatic SMS alerts to emergency contacts via GSM
- Engine cut-off using relay module in critical situations

## Hardware Used
- Arduino UNO
- GSM Module
- Blink Sensor (IR Sensor)
- Elastomeric Pressure Sensors
- Buzzer
- Relay Switch Module

## How It Works
1. The blink sensor monitors eye movements to detect drowsiness.
2. Pressure sensors track the grip on the steering wheel.
3. If drowsiness signs are detected:
   - Buzzer alarm activates
   - Vibration motor triggers
   - SMS alert sent through GSM Module
   - Relay module can cut off engine power if no response

## Block Diagram
![Block Diagram](./assets/block-diagram.png)

## Demo
[▶️ Watch the Demo Video](./assets/demo-video.mp4)

## Contributors
- Jayshree Sharma
- Sonali Das
- Shreya Gholap
- Santhosh Phanitalpak Gandhala

---

> Developed as part of the Internet of Things (Elective-1) course under the guidance of Mrs. Shubhangi Deokar.
