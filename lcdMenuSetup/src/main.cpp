#include "graphics.cpp"

using namespace vex;

void initialize() {}

void competition_initialize() {}

void autonomous() {}

void driverControl() {}

int main() {
  lcdButtons();
  lcdText();
  while (1) {
    lcdTouch();
    Brain.Screen.render();
    
  }
}