#include <Servo.h>

Servo servo1;  
  void setup() {
  servo1.attach(6); //Pin PWM 6
}

void loop() {
  //arah 0 deg
  servo1.write(0); 
  delay(2000); 
  //arah 90 deg
  servo1.write(90); 
  delay(2000);  
  //arah 180 deg
  servo1.write(180); 
  delay(2000);
}