#include "lift.h"

lift::lift(int leftLiftMotorPort, int rightLiftMotorPort) {
  leftLiftMotor = new pros::Motor(leftLiftMotorPort, true);
  rightLiftMotor = new pros::Motor(rightLiftMotorPort, false);
}

void lift::setSpeed(int liftSpeed) {
  leftLiftMotor->move(liftSpeed);
  rightLiftMotor->move(liftSpeed);
}

void lift::setPosition(int position) {

}

lift::~lift() {
  free(leftLiftMotor);
  free(rightLiftMotor);

  leftLiftMotor = 0;
  rightLiftMotor = 0;
}
