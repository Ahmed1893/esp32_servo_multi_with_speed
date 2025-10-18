#include <Arduino.h>
#include <ESP32Servo.h>
#include <Speed_Control.h>
#include <Multi_Servo.h>
Servo myservo;

Servo myserv[4];
int pos = 0;


int prev_sin = 0;

int prev_mul = 0;

int interval = 10;

int servoPin = 16;

int servppins[4] = {14,15,16,17};

int angles[]={90,90,90,90};
int speed = 50;
void setup() {

	ESP32PWM::allocateTimer(0);
	ESP32PWM::allocateTimer(1);
	ESP32PWM::allocateTimer(2);
	ESP32PWM::allocateTimer(3);
	
  Single_Servo_init(myservo,servoPin);

  Multi_Servos_init(myserv,servppins);
  

}


void loop() {

  Speed_Control_Single(50,180,servoPin,myservo,&prev_sin);

  Speed_Control_Multi(&speed,angles,servppins,myserv,&prev_mul);
  // put your main code here, to run repeatedly:
}

