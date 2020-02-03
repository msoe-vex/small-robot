#include "chassis.h"

chassis::chassis(int leftDriveMotorPort, int rightDriveMotorPort) {
  leftDriveMotor = new pros::Motor(leftDriveMotorPort, false);
  rightDriveMotor = new pros::Motor(rightDriveMotorPort, true);
}

void chassis::setSpeed(int leftDriveSpeed, int rightDriveSpeed) {
  leftDriveMotor->move(leftDriveSpeed);
  rightDriveMotor->move(rightDriveSpeed);
}

double chassis::getLeftMotorPosition() {
  return leftDriveMotor->get_position();
}

double chassis::getRightMotorPosition() {
  return rightDriveMotor->get_position();
}

chassis::~chassis() { // Deconstructor
  free(leftDriveMotor); // Free memory
  free(rightDriveMotor); // Free memory

  leftDriveMotor = 0; // Clear reference
  rightDriveMotor = 0; // Clear reference
}
