# Embedded Flight Controller

An ESP32-based single-axis flight stabilization controller exploring sensor simulation, PID control, and embedded firmware architecture.

This project is being developed as a hands-on learning project to understand how embedded flight-control systems are structured, how feedback control works, and how sensor data can be processed into actuator commands.

The project starts with a simulated sensor so that the control architecture and algorithms can be developed and tested before connecting real hardware.

---

## Project Overview

A flight controller continuously measures the orientation of a system, compares the measured orientation with a desired orientation, calculates the error, and commands an actuator to reduce that error.

The fundamental feedback loop is:

```text
        Desired Angle
              |
              v
        +-------------+
        |   Compare   |
        +-------------+
              |
            Error
              |
              v
        +-------------+
        | PID Control |
        +-------------+
              |
        Control Output
              |
              v
        +-------------+
        |   Actuator  |
        +-------------+
              |
              v
        System Response
              |
              v
        +-------------+
        |    Sensor   |
        +-------------+
              |
<<<<<<< HEAD
              +---------------------> Feedback
=======
              +---------------------> Feedback
>>>>>>> 0b9c8b5 (Initial commit - Embedded Flight Controller)
