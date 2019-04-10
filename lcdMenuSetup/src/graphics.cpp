#include "lcdclass.h"

bool screenPressed = false;
const char * buttonOneText("Red");
const char * buttonTwoText("Blue");
const char * buttonThreeText("Skills");
const char * buttonFourText("Other");

void lcdIcons(int folderX, int folderY, vex::color folderColor){
  Brain.Screen.setPenColor(vex::white);
  Brain.Screen.setPenWidth(0);
    // Brain.Screen.drawRectangle(17, 46, 18, 32, vex::red);
    // Brain.Screen.drawRectangle(35, 57, 8, 21, vex::red);
    // Brain.Screen.setPenWidth(4);
    // Brain.Screen.drawLine(13, 44, 36, 44);
    // Brain.Screen.drawLine(13, 80, 46, 80);
    // Brain.Screen.drawLine(15, 42, 15, 81);
    // Brain.Screen.drawLine(45, 53, 45, 81);
    // Brain.Screen.drawLine(36, 45, 44, 53);

  // Draw Colors
    Brain.Screen.drawRectangle(4+folderX, 4+folderY, 32, 12, folderColor);
  // Draw icon 1
    Brain.Screen.setPenWidth(4);
    Brain.Screen.drawLine(0+folderX, 2+folderY, 17+folderX, 2+folderY);
    Brain.Screen.drawLine(16+folderX, 2+folderY, 20+folderX, 6+folderY);
    Brain.Screen.drawLine(19+folderX, 6+folderY, 39+folderX, 6+folderY);
    Brain.Screen.drawLine(38+folderX, 4+folderY, 38+folderX, 39+folderY);
    Brain.Screen.drawLine(0+folderX, 38+folderY, 39+folderX, 38+folderY);
    Brain.Screen.drawLine(2+folderX, 39+folderY, 2+folderX, 0+folderY);
    Brain.Screen.drawLine(0+folderX, 18+folderY, 17+folderX, 18+folderY);
    Brain.Screen.drawLine(16+folderX, 18+folderY, 20+folderX, 14+folderY);
    Brain.Screen.drawLine(19+folderX, 14+folderY, 39+folderX, 14+folderY);

}

void lcdButtons(){
  Brain.Screen.setPenWidth(0); // Remove outline
  
  Brain.Screen.drawRectangle(0, 0, 480, 240, vex::color(3553599)); // Draw background
  //Draw navigation bar
    Brain.Screen.drawRectangle(60, 0, 338, 32, vex::color(3092790)); // Path
    Brain.Screen.drawRectangle(0, 0, 50, 32, vex::color(2105893)); // Up
    Brain.Screen.drawRectangle(408, 0, 72, 32, vex::color(2105893)); // Home
  // Draw the buttons
    Brain.Screen.drawRectangle(60, 42, 411, 40, vex::color(2105893)); // Button 1
    Brain.Screen.drawRectangle(60, 92, 411, 40, vex::color(2105893)); // Button 2
    Brain.Screen.drawRectangle(60, 142, 411, 40, vex::color(2105893)); // Button 3
    Brain.Screen.drawRectangle(60, 192, 411, 40, vex::color(2105893)); // Button 4
  // Draw the icons
    lcdIcons(10, 42, vex::red);
    lcdIcons(10, 92, vex::blue);
    lcdIcons(10, 142, vex::yellow);
    lcdIcons(10, 192, vex::color(2082447));
}

void lcdText(){
  Brain.Screen.setPenColor(vex::white); // Set text color

  Brain.Screen.setFont(vex::fontType::prop20);

  Brain.Screen.printAt(13, 22, false, "Up");
  Brain.Screen.printAt(70, 22, false, "/");
  Brain.Screen.printAt(418, 22, false, "Home");

  Brain.Screen.setFont(vex::fontType::prop30);

  Brain.Screen.printAt(70, 72, false, buttonOneText);
  Brain.Screen.printAt(70, 122, false, buttonTwoText);
  Brain.Screen.printAt(70, 172, false, buttonThreeText);
  Brain.Screen.printAt(70, 222, false, buttonFourText);
}

void lcdTouch(){
   
  if (Brain.Screen.pressing() && !screenPressed){
    screenPressed = true;
    lcdButtons();

    if (Brain.Screen.yPosition() > 37 && Brain.Screen.yPosition() < 87){
     Brain.Screen.drawRectangle(60, 42, 411, 40, vex::color(2105893)); // Button 1
    } else if (Brain.Screen.yPosition() > 87 && Brain.Screen.yPosition() < 137){
    Brain.Screen.drawRectangle(60, 92, 411, 40, vex::color(2105893)); // Button 2
    } else if (Brain.Screen.yPosition() > 137 && Brain.Screen.yPosition() < 187){
    Brain.Screen.drawRectangle(60, 142, 411, 40, vex::color(2105893)); // Button 3
    } else if (Brain.Screen.yPosition() > 187 && Brain.Screen.yPosition() < 237){
      Brain.Screen.drawRectangle(60, 192, 411, 40, vex::color(2105893)); // Button 4
    } else if (Brain.Screen.xPosition() < 55 && Brain.Screen.yPosition() < 37){
      Brain.Screen.drawRectangle(0, 0, 50, 32, vex::color(2105893)); // Up
    } else if (Brain.Screen.xPosition() > 403 && Brain.Screen.yPosition() < 37){
      Brain.Screen.drawRectangle(408, 0, 70, 32, vex::color(2105893)); // Home
    }
    lcdText();
  } else if (!Brain.Screen.pressing() && screenPressed) {
    screenPressed = false;
  }
}
