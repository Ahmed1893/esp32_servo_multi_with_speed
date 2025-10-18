#include "Multi_Servo.h"

void Multi_Servos_init(Servo *Servo, int *Servo_Pin) {

int Num = sizeof(Servo_Pin)/sizeof(Servo_Pin[0]);

for (int i = 0; i < Num; i++) {
    Servo[i].setPeriodHertz(50);
    Servo[i].attach(Servo_Pin[i], 800, 2400);
    Servo[i].write(90);
  }

}


void Single_Servo_init(Servo &Servo, int Servo_Pin) {

    Servo.setPeriodHertz(50);
    Servo.attach(Servo_Pin, 800, 2400);
    Servo.write(90);


}
