#pragma once

#include "api.h"

class chassis {
public:
  pros::Motor *leftDriveMotor, *rightDriveMotor;

  chassis(int leftDriveMotorPort, int rightDriveMotorPort);

  void setSpeed(int leftDriveSpeed, int rightDriveSpeed);

  double getLeftMotorPosition();

  double getRightMotorPosition();

  ~chassis();
};
