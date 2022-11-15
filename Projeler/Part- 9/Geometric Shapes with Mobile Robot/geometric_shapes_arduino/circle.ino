#define MotorR1 3
#define MotorR2 4
#define MotorRE 5
#define MotorL1 8
#define MotorL2 7
#define MotorLE 6


void setup() {
  // put your setup code here, to run once:
  pinMode(MotorR1, OUTPUT);
  pinMode(MotorR2, OUTPUT);
  pinMode(MotorL1, OUTPUT);
  pinMode(MotorL2, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(MotorR1,HIGH);
  digitalWrite(MotorR2,LOW);
  analogWrite(MotorRE,125);
  digitalWrite(MotorL1,HIGH);
  digitalWrite(MotorL2,LOW);
  analogWrite(MotorLE,75);

}
