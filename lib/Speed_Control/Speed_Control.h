#ifndef Speed_Control
#define Speed_Control

#include <Arduino.h>
#include <ESP32Servo.h>

void Speed_Control_Single(int speed, int angle, int Servo_Pin, Servo &Servo, int *prev, bool instat = false);

void Speed_Control_Multi(int *speed, int *angle, int *Servo_Pin, Servo *Servo, int *prev, bool instat = false);


#endif