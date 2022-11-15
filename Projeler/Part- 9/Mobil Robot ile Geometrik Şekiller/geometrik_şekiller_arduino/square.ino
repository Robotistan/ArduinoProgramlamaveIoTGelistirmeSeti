#define MotorR1 3
#define MotorR2 4
#define MotorRE 5
#define MotorL1 8
#define MotorL2 7
#define MotorLE 6
int hiz=150;

void setup() {
  // put your setup code here, to run once:
  pinMode(MotorR1,OUTPUT);
  pinMode(MotorR2,OUTPUT);
  pinMode(MotorL1,OUTPUT);
  pinMode(MotorL2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<4; i++){
    ileri();
    delay(1500);
    dur();
    delay(1500);
    sag();
    delay(1000);
    dur();
    delay(1500);
  }  
}
void ileri(){
  digitalWrite(MotorR1,HIGH);
  digitalWrite(MotorR2,LOW);
  analogWrite(MotorRE,hiz);
  digitalWrite(MotorL1,HIGH);
  digitalWrite(MotorL2,LOW);
  analogWrite(MotorLE,hiz);
  
}
void sag(){
  digitalWrite(MotorR1,HIGH);
  digitalWrite(MotorR2,LOW);
  analogWrite(MotorRE,hiz);
  digitalWrite(MotorL1,HIGH);
  digitalWrite(MotorL2,LOW);
  analogWrite(MotorLE,hiz);
  
}
void sol(){
  digitalWrite(MotorR1,HIGH);
  digitalWrite(MotorR2,LOW);
  analogWrite(MotorRE,hiz);
  digitalWrite(MotorL1,HIGH);
  digitalWrite(MotorL2,LOW);
  analogWrite(MotorLE,hiz);
  
}
void geri(){
  digitalWrite(MotorR1,LOW);
  digitalWrite(MotorR2,HIGH);
  analogWrite(MotorRE,hiz);
  digitalWrite(MotorL1,LOW);
  digitalWrite(MotorL2,HIGH);
  analogWrite(MotorLE,hiz);
  
}
void dur(){
  digitalWrite(MotorR1,HIGH);
  digitalWrite(MotorR2,LOW);
  analogWrite(MotorRE,hiz);
  digitalWrite(MotorL1,HIGH);
  digitalWrite(MotorL2,LOW);
  analogWrite(MotorLE,hiz);
  
}
