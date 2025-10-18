#include "Speed_Control.h"

void Speed_Control_Single(int speed, int angle, int Servo_Pin, Servo &Servo, int *prev, bool instat = false)
{
    int current_millis = millis();
    int interval = map(speed, 0, 100, 5, 50);
    int prevoius_angle = Servo.read();

    if (!instat)
    {
        Servo.write(angle);
    }

    else
    {
        if (current_millis - *prev >= interval)
        {
            *prev = current_millis;
            if (angle > prevoius_angle)
            {
                prevoius_angle += 1;
                Servo.write(prevoius_angle);
            }

            else if (angle < prevoius_angle)
            {
                prevoius_angle -= 1;
                Servo.write(prevoius_angle);
            }

            else
            {
                Servo.write(prevoius_angle);
            }
        }
    }
}

void Speed_Control_Multi(int *speed, int *angle, int *Servo_Pin, Servo *Servo, int *prev, bool instat = false)
{
    int current_millis = millis();

    int num = sizeof(Servo_Pin) / sizeof(Servo_Pin[0]);
    for (int i = 0; i < num; i++)
    {
        int interval = map(speed[i], 0, 100, 5, 50);
        int prevoius_angle = Servo[i].read();

        if (!instat)
        {
            Servo[i].write(angle[i]);
        }

        else
        {
            if (current_millis - *prev >= interval)
            {
                *prev = current_millis;
                if (angle[i] > prevoius_angle)
                {
                    prevoius_angle += 1;
                    Servo[i].write(prevoius_angle);
                }

                else if (angle[i] < prevoius_angle)
                {
                    prevoius_angle -= 1;
                    Servo[i].write(prevoius_angle);
                }

                else
                {
                    Servo[i].write(prevoius_angle);
                }
            }
        }
    }
}
