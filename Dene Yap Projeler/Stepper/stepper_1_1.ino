#include <stepper.h>

const int stepp = 200;
int speedd;
Stepper myStepper(stepp, 8, 9, 10, 11);

void setup() {

  Serial.begin(9600);
}
void loop() {
  if(Serial.available()>0{
  speedd=Serial.read();
  Serial.print("Input speed value of the step motor");
  Serial.println(speedd);
  }

  mystepper.setSpeed(speedd);
  Serial.println("Clockwise rotation");
  myStepper.step(stepp);
  delay(500);
  Serial.println("Counterclockwise rotation");
  myStepper.step(-stepp);
  delay(500);
}
