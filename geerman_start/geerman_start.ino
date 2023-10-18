#include <Servo.h>
int sensorPin = A0;           
unsigned int sensorValue = 0;  
int gradServo = 0;

Servo servo;

void setup()
{
 servo.attach(3);
 pinMode(3, OUTPUT);
 Serial.begin(9600);
}

void loop()
{
/*
 sensorValue = analogRead(sensorPin);  
 Serial.println(sensorValue);
 if (sensorValue>10){
  gradServo = 0;
 } 
 else {
  gradServo = 180;
  delay(1000);
 }
 servo.write(gradServo);
 */
 delay(5000);
 servo.write(180);
 delay(1000);
 servo.write(90);
 delay(1000);
}