#include <Arduino.h>

#include <Servo.h>
int ledPin = 12;
int readValue = 0;
int ledValue = 0;

Servo servoMain; //  Servo motor

int trigpin = 10;// 

int echopin = 11;

int distance;

float duration;

float cm;


void setup();

void loop();

void setup()

{

servoMain.attach(9); // servo on digital pin 10

pinMode(trigpin, OUTPUT);

pinMode(echopin, INPUT);
 pinMode(ledPin, OUTPUT);

}

void loop()

{
   readValue = analogRead(A0);
  ledValue = map(readValue, 0, 1024, 0, 255);
  analogWrite(ledPin, ledValue);

digitalWrite(trigpin, LOW);

delay(2);

digitalWrite(trigpin, HIGH);

delayMicroseconds(10);

digitalWrite(trigpin, LOW);

duration = pulseIn(echopin, HIGH);

cm = (duration/58.82);

distance = cm;

if(distance<30)

{

servoMain.write(180); // Turn Servo back to center position (90 degrees)

delay(3000);

}

else{

servoMain.write(0);

delay(50);

}

}

