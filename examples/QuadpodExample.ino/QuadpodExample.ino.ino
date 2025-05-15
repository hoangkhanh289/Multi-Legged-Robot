/* Sweep

 */
#include <Quadpod.h>

#define SERVOMIN 102  // ~500 µs
#define SERVOMAX 512  // ~2500 µs

Quadpod quadruped(SERVOMIN, SERVOMAX);

void setup() {
  quadruped.begin(50);  // Đặt tần số PWM là 50Hz
}

void loop() {
  quadruped.moveToPosition1();
  quadruped.moveToPosition2();
}