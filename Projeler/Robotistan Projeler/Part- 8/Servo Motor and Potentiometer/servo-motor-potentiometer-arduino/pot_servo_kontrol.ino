#include <Servo.h>

Servo myservo;  

int potpin = A0;  
int aci;    

void setup() {
  myservo.attach(9);  
}

void loop() {
  aci = analogRead(potpin);           
  aci = map(aci, 0, 1023, 0, 180);     
  myservo.write(aci);                  
  delay(15);                          
}
