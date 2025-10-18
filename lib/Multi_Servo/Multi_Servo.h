#ifndef Multi_Servo
#define Multi_Servo

#include <Arduino.h>
#include <ESP32Servo.h>

void Multi_Servos_init(Servo *Servo, int *Servo_Pin);
void Single_Servo_init(Servo &Servo, int Servo_Pin) ;

#endif