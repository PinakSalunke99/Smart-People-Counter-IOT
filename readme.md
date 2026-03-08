# Smart People Counter using Computer Vision and Arduino

This project implements a real-time people counting system using OpenCV and an Arduino-based LED display.

The system detects and tracks individuals crossing defined virtual lines in a video feed. When a person enters or exits the monitored area, the count is updated and transmitted to an Arduino via serial communication.

The Arduino then displays the current occupancy count on a TM1637 7-segment display.

## Features

• Real-time people detection using OpenCV  
• Entry and exit counting  
• Serial communication with Arduino  
• Live occupancy display on 7-segment module  
• Background subtraction based motion detection  

## Technologies Used

Python  
OpenCV  
NumPy  
Arduino  
Serial Communication  

## Hardware Components

Arduino UNO  
TM1637 7-Segment Display  
Webcam  

## How It Works

1. Webcam captures video feed  
2. OpenCV detects motion and tracks individuals  
3. Crossing detection logic counts entry/exit  
4. Python sends updated count to Arduino via serial  
5. Arduino displays occupancy count on LED display