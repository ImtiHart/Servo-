#include <Servo.h> //Used for servo implementation
Servo s; //Declares a servo
void setup() {
  s.attach(9); //Selects the pin used for the servo;
  Serial.begin(9600);
}


void loop() {
  s.write(0); //Causes servo to rotate to position '0'. Servo rotations use degrees from0 to 360
}
