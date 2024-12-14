#include <Servo.h>
Servo servo;
int button;
void setup() {
  //pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(7, INPUT);
  //servo.attach(9);
  Serial.begin(9600);
}

void loop() {
  button = digitalRead(7);
  Serial.println(button);

}
