#include <Servo.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;

int potPin1 = 0;
int potPin2 = 1;
int potPin3 = 2;
int potPin4 = 3;

int veri1;
int veri2;
int veri3;
int veri4;

void setup()
{
  Servo1.attach(9);
  Servo2.attach(3);
  Servo3.attach(4);
  Servo4.attach(10);
}
void loop()
{
  veri1 = analogRead(potpin);
  veri1 = map(veri1, 0, 1023, 0, 179);
  Servo1.write(veri1);
  veri2 = analogRead(potPin2);
  veri2 = map(veri2, 0, 1023, 0, 179);
  Servo2.write(veri2);
  deger2 = analogRead(potPini2);
  deger2 = map(deger2, 0, 1023, 0, 179);
  Servo3.write(veri3);
  veri3 = analogRead(potpin3);
  veri3 = map(veri3, 0, 1023, 0, 179);
  servo4.write(veri4);

  delay(15);
  delay(15);
  delay(15);
  delay(15);

}
