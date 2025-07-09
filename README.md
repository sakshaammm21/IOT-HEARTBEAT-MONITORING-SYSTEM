# 💓 IoT-Based Smart Heartbeat Monitoring System

## 📘 Project Overview
This project presents an **IoT-based heartbeat monitoring system** that allows real-time tracking of a patient’s heartbeat remotely. It uses sensors to detect the pulse and sends the data over the internet using a microcontroller and Wi-Fi module.

## 🎯 Objectives
- Monitor a patient’s heartbeat in real-time
- Display the BPM (beats per minute) on an LCD or web dashboard
- Alert if heartbeat goes beyond a critical range
- Enable remote health monitoring for doctors and caretakers

## 🔧 Components Used
| Hardware               | Software              |
|------------------------|-----------------------|
| Pulse Sensor           | Arduino IDE           |
| Arduino UNO / NodeMCU  | Embedded C / Arduino C|
| LCD Display (16x2)     | ThingSpeak / Blynk    |
| Wi-Fi Module (ESP8266) | Serial Monitor        |

## 🧠 How It Works
1. Heartbeat sensor detects the pulse rate.
2. Microcontroller reads the pulse value.
3. Data is sent via Wi-Fi to IoT platform.
4. BPM data is shown on dashboard and alerts can be triggered.

## 📁 Folder Structure
```
IoT-Heartbeat-Monitoring-System/
├── heartbeat_monitor.ino
├── README.md
└── images/
    ├── circuit_diagram.png
    └── working_demo.gif
```

## 📎 Future Scope
- Add SpO2 monitoring using MAX30100
- Mobile app integration
- Patient record logging

## 👨‍💻 Developed By
**Saksham Singh**  
B.Tech IT, VIT Vellore  
GitHub: [@sakshaammm21](https://github.com/your-username)
