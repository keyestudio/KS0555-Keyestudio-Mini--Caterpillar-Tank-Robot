/*
  Keyestudio Mini Tank Robot V3 (Popular Edition)
  lesson 0
  set servo
  http://www.keyestudio.com
*/
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(10);  // attaches the servo on pin 10 to the servo object
  myservo.write(0);
  delay(500);
  myservo.write(90);
  delay(500);
  myservo.write(180);
  delay(500);
  myservo.write(90);
  delay(500);
}

void loop() {

}