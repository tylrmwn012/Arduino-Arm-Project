// this is my initial ARM project - code currently 
//    moves through 0-180 degrees and back on six servos

// list:
// 6 servo motors
// servo driver
// potentiometer for each joint (6)
// 5v battery pack
// stepper motor
#include <Servo.h>

Servo shoulderOne;
Servo shoulderTwo;
Servo elbow;
Servo wristOne;
Servo wristTwo;
Servo gripper;

void setup() {
  shoulderOne.attach(9);
  shoulderTwo.attach(8);
  elbow.attach(7);
  wristOne.attach(6);
  wristTwo.attach(5);
  gripper.attach(4);
}

void loop() {
  for (int i = 0; i <= 180; i++) {
    shoulderOne.write(i);
    shoulderTwo.write(i);
    elbow.write(i);
    wristOne.write(i);
    wristTwo.write(i);
    gripper.write(i);
    delay(15);
  }

  for (int i = 180; i >= 0; i--) {
    shoulderOne.write(i);
    shoulderTwo.write(i);
    elbow.write(i);
    wristOne.write(i);
    wristTwo.write(i);
    gripper.write(i);
    delay(15);
  }
}