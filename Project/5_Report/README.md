# Smart Dust Bin

## Abstract 
Smart Dust Bin as its names to depict. It works likewise smart things. It is a decent gadget to make your home clean. due to practically all offspring of home consistently make it grimy and spread trash to a great extent by paper, rappers and numerous different things. since the smart dustbin is additionally intriguing and kids make fun with it so they help to keep clean your home. they generally will be utilized to through all trash and waste into this smart dustbin.smart dustbin opens and closes it’s top when somebody is before it. when you come before it. it’s top get open. also, when you toss the loss into it then it closes independent from anyone else. When the bin is full it give indication by led.

## Introduction
Dustbin is the storage container used for disposing waste by each and every person in the world. The main thing they look in their surroundings for disposing waste is the Dustbin. Smart Dustbin is just a normal bin where everyone can dispose waste but integration of some hardware components is done for more efficient use of it. Smart Dustbin is integrated with some hardware components such as Arduino, NODEMCU,Servo Motor, Ultrasonic sensors. These components help in opening the lid, on detection of human hand and waste and also sending the notification in the form of LED. The code required to perform the above-mentioned operation is dumped in Arduino and NODEMCU.

## Block diagram
![block](https://user-images.githubusercontent.com/46933088/156998436-79fccf2a-2481-451b-ab33-a0d1edf55125.jpg)

## Components

1. Arduino UNO  - Arduino UNO is a low-cost, flexible, and easy-to-use programmable open-source microcontroller board that can be integrated into a variety of electronic projects.

2. Ultrasonic Sensor - An ultrasonic sensor is an instrument that measures the distance to an object using ultrasonic sound waves. An ultrasonic sensor uses a transducer to send and receive ultrasonic pulses that relay back information about an object's proximity.

3. IR sensor - An infrared sensor (IR sensor) is a radiation-sensitive optoelectronic component with a spectral sensitivity in the infrared wavelength.IR sensors are now widely used in motion detectors, which are used in building services to switch on lamps or in alarm systems to detect unwelcome guests.

4. Servo motor - A servomotor is a rotary actuator or linear actuator that allows for precise control of angular or linear position, velocity and acceleration. It consists of a suitable motor coupled to a sensor for position feedback.

5. LED - (light-emitting diode) a semiconductor diode that emits light when conducting current and is used in electronic displays, indoor and outdoor lighting.

6. Potentiometer - A potentiometer is a three-terminal resistor with a sliding or rotating contact that forms an adjustable voltage divider. If only two terminals are used, one end and the wiper, it acts as a variable resistor or rheostat.

## SWOT Analysis
![swot](https://user-images.githubusercontent.com/46933088/157000822-dfb7a744-7063-4b98-a572-23cb5a89e4bf.jpg)

## 4W's and 1'H
## Who
### In house,Public places like movie theaters etc.

## What
### To open the top of the dustbin and singnal when the dustbin is full.

## When
### When user carry the waste in both hands it will more helpful.

## Where
### To Keep surrounding clean and hygiene.

## How
### By creating a system/model which helps the user.The dustbin opens automatically when it receives the signal and closes its hatch.It also tells the user by wheather the bin is full or not using Led.

## Reqirements

### High Level Requirement

| ID | Description |  
| ----- | ----- | 
| HLR01 | The Dustbin should be empty before use|
| HLR02 | The Ultrasonic sensor should be able to sense the person moves towards Dustbin|
| HLR03 | The IR sensor should be able to detect when Dustbin is full| 
| HLR04 | Servo motor should work according to the inputs given by Ultrasonic sensor| 
 
### Low Level Requirement

| ID | Description |  
| ----- | ----- |
| LLR01 |When the ultrasonic detects user approaching the Dustbin servomotor should rotate 90 degrees to open the top of Dustbin |
| LLR02 |When the ultrasonic detects user is moving away from the Dustbin servomotor should rotate 90 degrees(opposite direction) to close the top of Dustbin| 
| LLR03 | IR sensor detects Dustbin is full by turning ON LED |
| LLR04 | When the Dustbin is empty the LED should turn OFF |

## Architecture

![Architech](https://user-images.githubusercontent.com/46933088/156163898-6246ce72-9fd5-4d75-88e7-8e9bc5574bd0.jpg)

## Usecase Diagram

![UsecaseDiagram](https://user-images.githubusercontent.com/46933088/156160240-26ecd8ef-40bf-4ece-9d5b-8e3b4def37e5.jpg)

## Low level

![lowlevel](https://user-images.githubusercontent.com/46933088/157165196-e25759d5-5735-4079-b24a-cf6ba28e3648.jpg)

## High level

![highlevel](https://user-images.githubusercontent.com/46933088/157165284-d6edbb6e-bf5d-44f4-8004-b8c68dc846ef.jpg)