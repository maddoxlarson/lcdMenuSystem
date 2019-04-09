#include "lcdclass.h"
#include "variables.cpp"

using namespace vex;

void initHome() {
  Brain.Screen.clearScreen(vex::color::black);
  page_select = 0;
}

void Action1(){
  // if (page_select == 0){
}