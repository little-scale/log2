/*
  log2.cpp
  
  Created by Sebastian Tomczak, 25 March 2017

*/


#include "Arduino.h"
#include "Math.h"
#include "log2.h"

double log2(double log2_input) {

  return log(log2_input) / log(2); 
  
}
