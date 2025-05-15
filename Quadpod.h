#ifndef QUADPOD_H
#define QUADPOD_H

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

class Quadpod
{
private:
    Adafruit_PWMServoDriver pwm;
    int servoMin;
    int servoMax;
    int mapAngleToPulse(int angle);

public:
    Quadpod(int minPulse, int maxPulse);
    void begin(uint8_t freq);
    void setServoAngle(uint8_t servoNum, int angle);
    void moveToPosition1();
    void moveToPosition2();
};


#endif