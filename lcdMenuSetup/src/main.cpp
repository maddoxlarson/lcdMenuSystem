#include "lcdclass.h"

using namespace vex;

void initialize() {}
void competition_initialize() {}
void autonomous() {}
void driverControl() {}

int main() {
  initialize();
  while (Competition.isEnabled()) {
    competition_initialize();
    if (Competition.isAutonomous()) {
      autonomous();
    } else if (Competition.isDriverControl()) {
      driverControl();
    } else {
      vex::task::sleep(100); // nothing
    }
  }

  while (1) {
    vex::task::sleep(100);
  }
}