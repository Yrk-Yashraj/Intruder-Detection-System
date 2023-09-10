# Arduino Based Intruder Detection System with real time positioning on a display for improving home security

## Table of Contents
- [Project Overview](#project-overview)
- [Components](#components)
- [Functionality](#functionality)
- [Practical Applications](#practical-applications)
- [Expected Outcome](#expected-outcome)
- [Setup Instructions](#setup-instructions)
- [Circuit Diagram](#circuit-diagram)

## Project Overview

Welcome to our Arduino-based software project designed to enhance security and prevent intrusions in a residential environment. In this project, we utilize various sensors and components to create an Intruder Detection System. Here's an overview of our project:

1. **Objective**: We aim to develop a system that can detect intruders within a defined area and promptly notify the user using visual and auditory signals. Additionally, we provide real-time positional information about the intruder.

2. **Components**:
   - **IR Sensor**: This infrared sensor is employed to detect the presence of an intruder within its range.
   - **Buzzer**: A buzzer is used to generate an audible alert when an intrusion is detected.
   - **Light Bulb**: We connect a light bulb to the Arduino board to provide a visual alert to the user.
   - **Ultrasonic Distance Sensor**: This sensor measures the distance between the intruder and the sensor, enabling real-time positional tracking.
   - **LCD Display**: An LCD display is used to show the intruder's position within the residence area.

3. **Functionality**:
   - When an intruder enters the range of the IR Sensor, it triggers the system.
   - The system responds by activating both the buzzer and the light bulb to alert the user.
   - Simultaneously, the Ultrasonic Distance Sensor measures the intruder's distance from the sensor and displays this information on the LCD display.

4. **Practical Applications**:
   - Our project has diverse practical applications in real life, including:
     - Preventing break-ins by providing immediate alerts to homeowners.
     - Increasing security on residential premises.
     - Enhancing peace of mind for homeowners.

## Expected Outcome

We anticipate the following outcomes from our Intruder Detection System:

1. **Intrusion Alert**:
   - The system should effectively detect the presence of an intruder using the IR Sensor.
   - Upon detection, the buzzer should sound, and the light bulb should illuminate, providing a clear and immediate alert to the user.

2. **Real-time Position Display**:
   - The Ultrasonic Distance Sensor should accurately measure the distance to the intruder.
   - This distance data should be displayed in real-time on the LCD Display, allowing the user to track the intruder's position within the residence.

By combining these features, our Arduino-based Intruder Detection System offers an efficient and practical solution to enhance security in residential settings.

## Setup Instructions

To set up the Intruder Detection System, follow these steps:

1. **Clone the Repository**:
gh repo clone Yrk-Yashraj/Intruder-Detection-System

2. **Upload Arduino Code**:
- Open the Arduino IDE and load the provided Arduino code from the repository.
- Connect your Arduino board and upload the code to the board.

3. **Assemble Hardware**:
- Connect the IR Sensor, Buzzer, Light Bulb, Ultrasonic Distance Sensor, and LCD Display as per the provided schematic.

4. **Power On**:
- Power on the Arduino board.

5. **Monitor the System**:
- Observe the system's behavior as it detects intruders and displays their position on the LCD Display.

## Circuit Diagram
![image](https://github.com/Yrk-Yashraj/Intruder-Detection-System/assets/107758107/5f8c44ab-7cdd-46e2-aeef-e64612891423)

