/*
  log2.ino

  Created by Sebastian Tomczak, 25 March 2017

  This example calculates 1000 Hz as a MIDI note value, and then prints to the serial monitor
  
*/

#include <log2.h>

void setup() {
  Serial.begin(57600); 
  delay(1000);
  Serial.println(69 + (12.0 * log2(1000.0 / 440.0)));
}

void loop() {

}
