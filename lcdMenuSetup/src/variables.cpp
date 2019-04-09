#include "variables.h"

int auto_count = 0;
int auto_select = 0;
int pages[15][4] = {
  {  1,  2, 3, 4},  //0  Home
  { 12,  5, 0, 0 }, //1  Red
  { 26, 19, 0, 0 }, //2  Blue
  {  6,  9, 0, 0 }, //3  Blue Back
  {  7,  8, 0, 0 }, //4    Parking
  { 10, 11, 0, 0 }, //5    Non-parking
  { 13, 16, 0, 0 }, //6  Blue Front
  { 14, 15, 0, 0 }, //7    Parking
  { 17, 18, 0, 0 }, //8    Non-parking
  { 20, 23, 0, 0 }, //9  RedBack
  { 21, 22, 0, 0 }, //10   Parking
  { 24, 25, 0, 0 }, //11   Non-parking
  { 27, 30, 0, 0 }, //12 RedFront
  { 28, 29, 0, 0 }, //12   Parking
  { 31, 32, 0, 0 }  //14   Non-parking
};