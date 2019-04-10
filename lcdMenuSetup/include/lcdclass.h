#include "variables.h"
#include "vex.h"

int page_select = 0;
int xPos = Brain.Screen.xPosition();
int yPos = Brain.Screen.yPosition();

struct Page {
  const char *name;
  int page_number;
  bool isAuton;
  const char *parent;
  // const char *children;
  const char *description;
};

Page listOfPages[33] = {
/*  0 */  {"Home", 0, false, __null},
/*  1 */  {"Red", 1, false, "Home"},
/*  2 */  {"Blue", 2, false, "Home"},
/*  3 */  {"Skills", 3, false, "Home"},
/*  4 */  {"Other", 4, false, "Home"},
/*  5 */  {"Back", 5, false, "Blue"},
/*  6 */  {"Back Blue Parking", 6, false, "Back Blue"},
/*  7 */  {"3 flags, 1 cap", 7, true, "Back Blue Parking", "Bla bla bla"},  
/*  8 */  {"5 flags, no cap", 8, true, "Back Blue Parking", "Bla bla bla"},
/*  9 */  {"Back Blue Non-Parking", 9, false, "Back Blue"},
/* 10 */  {"3 flags, 1 cap", 10, true, "Back Blue Non-Parking", "Bla bla bla"},
/* 11 */  {"5 flags, no cap", 11, true, "Back Blue Non-Parking", "Bla bla bla"},
/* 12 */  {"Front", 12, false, "Blue"},
/* 13 */  {"Front Blue Parking", 13, false, "Front Blue"},
/* 14 */  {"3 flags, 1 cap", 14, true, "Front Blue Parking", "Bla bla bla"},  
/* 15 */  {"5 flags, no cap", 15, true, "Front Blue Parking", "Bla bla bla"},
/* 16 */  {"Front Blue Non-Parking", 16, false, "Front Red"},
/* 17 */  {"3 flags, 1 cap", 17, true, "Front Blue Non-Parking", "Bla bla bla"},  
/* 18 */  {"5 flags, no cap", 18, true, "Front Blue Non-Parking", "Bla bla bla"},
/* 19 */  {"Back", 19, false, "Red"},
/* 20 */  {"Back Red Parking", 20, false, "Back Red"},
/* 21 */  {"3 flags, 1 cap", 21, true, "Back Red Parking", "Bla bla bla"},  
/* 22 */  {"5 flags, no cap", 22, true, "Back Red Parking", "Bla bla bla"},
/* 23 */  {"Back Red Non-Parking", 23, false, "Back Red"},
/* 24 */  {"3 flags, 1 cap", 24, true, "Back Red Non-Parking", "Bla bla bla"},  
/* 25 */  {"5 flags, no cap", 25, true, "Back Red Non-Parking", "Bla bla bla"},
/* 26 */  {"Front", 26, false, "Red"},
/* 27 */  {"Front Red Parking", 27, false, "Front Red"},
/* 28 */  {"3 flags, 1 cap", 28, true, "Front Red Parking", "Bla bla bla"},  
/* 29 */  {"5 flags, no cap", 29, true, "Front Red Parking", "Bla bla bla"},
/* 30 */  {"Front Red Non-Parking", 30, false, "Front Red"},
/* 31 */  {"3 flags, 1 cap", 31, true, "Back Red Non-Parking", "Bla bla bla"},  
/* 32 */  {"5 flags, no cap", 32, true, "Back Red Non-Parking", "Bla bla bla"}
};

void testPrint(int x, int y){
  for (int i = 0; i < 32; i++){
    Brain.Screen.printAt( 0, 0, listOfPages[i].name);
  }
}
