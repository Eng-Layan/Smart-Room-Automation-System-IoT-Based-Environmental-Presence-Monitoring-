# Smart Room Automation System – IoT-Based Environmental & Presence Monitoring

This project is an Arduino-based smart room system that monitors environmental factors (temperature, humidity, light, sound) and detects room occupancy using sensors. It automates actions like triggering an alert or switching on a device based on sensor data.

---

## Hardware Components

- Arduino Uno R3
- DHT11 Temperature & Humidity Sensor
- HC-SR04 Ultrasonic Sensor (for presence detection)
- LDR (Light sensor) + 10KΩ resistor
- Analog Sound Sensor (AO pin)
- LCD1602 Display (without I2C)
- Active Buzzer (for alert)
- LED (represents fan/light control)
- Breadboard + Jumper Wires

---

## System Features

-  **Presence detection** using ultrasonic sensor (< 120cm)
-  **Temperature-based LED activation** (fan simulation)
-  **Sound detection with buzzer** (if sound > 550)
-  **Light level sensing** via LDR
-  Real-time display via LCD + Serial Monitor

---

## Example LCD Output

T:29C H:45%
Status: Present


## Example Serial Monitor Output

Temp: 29.0 | Hum: 45.0 | Light: 540 | Sound: 312 | Distance: 93.2


---

## Project Image
![IMG_2830](https://github.com/user-attachments/assets/1b60cfce-f7ae-404c-b0b6-362be00569f7)
![IMG_2829](https://github.com/user-attachments/assets/81b710d3-2c86-4167-ba65-552176ddb3d9)

---

## Watch Demo Video
[![Watch the demo](https://youtube.com/shorts/DR2CJ9a2_j8)](https://youtube.com/shorts/DR2CJ9a2_j8)
---

## Skills Demonstrated

- Sensor fusion and environmental monitoring
- Real-time feedback via LCD and buzzer
- Conditional automation logic
- Embedded systems programming (Arduino IDE)
- Serial debugging and performance analysis

---

## Arduino Code

 [Click here to view the full Arduino sketch](smart_room_automation.ino)


