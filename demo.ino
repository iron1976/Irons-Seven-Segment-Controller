#include "Irons_Seven_Segment_Controller.h"

void setup() {
  Serial.begin(9600);
  
  int pins[8];
  for(int j = 3; j<= 10; j++)
    pins[j-3] = j;
  //11: vcc, true for anode false for cathode
  digit_controller *b = new digit_controller(pins,11,true);
  int arrr[14] = {-1,9,7,6,0,1,2,3,4,5,6,7,8,9};
  b->array_print(arrr, 14, 500);
  

 
    
}



void loop() {

}
