#include "Quadpod.h"

Quadpod::Quadpod(int minPulse, int maxPulse) : pwm(Adafruit_PWMServoDriver()), servoMin(minPulse), servoMax(maxPulse) {}

void Quadpod::begin(uint8_t freq)
{
    pwm.begin();
    pwm.setPWMFreq(freq);
    delay(10);
}

int Quadpod::mapAngleToPulse(int angle)
{
    return map(angle, 0, 180, servoMin, servoMax);
}

void Quadpod::setServoAngle(uint8_t servoNum, int angle)
{
    int pulse = mapAngleToPulse(angle);
    pwm.setPWM(servoNum, 0, pulse);
}

void Quadpod::moveToPosition1()
{
    setServoAngle(2, 0);
    setServoAngle(11, 0);
    setServoAngle(5, 180);
    setServoAngle(8, 180);
    setServoAngle(1, 45);
    setServoAngle(10, 45);
    setServoAngle(4, 135);
    setServoAngle(7, 135);
    delay(2000);
}

void Quadpod::moveToPosition2()
{
    setServoAngle(1, 90);
    setServoAngle(10, 90);
    setServoAngle(4, 90);
    setServoAngle(7, 90);
    setServoAngle(2, 45);
    setServoAngle(11, 45);
    setServoAngle(5, 135);
    setServoAngle(8, 135);
    delay(2000);
}