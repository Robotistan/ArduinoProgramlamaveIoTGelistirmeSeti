#define SensörSol A1
#define SensörOrta A2
#define SensörSağ A3

#define MotorR1 4
#define MotorR2 5
#define MotorRE 3

#define MotorL1 7
#define MotorL2 6
#define MotorLE 10 

int hiz = 75;

void setup() {

  pinMode(SensörSol,INPUT);
  pinMode(SensörOrta,INPUT);
  pinMode(SensörSağ,INPUT);
  Serial.begin(9600);
  Serial.println("Cizgi sensoru testi");
  delay(2000);

  pinMode(MotorR1,OUTPUT);
  pinMode(MotorR2,OUTPUT);
  pinMode(MotorL1,OUTPUT);
  pinMode(MotorL2,OUTPUT);

void loop() {

  Serial.print(digitalRead (SensörSol));
  Serial.print(",");
  Serial.print(digitalRead (SensörOrta));
  Serial.print (",");
  Serial.println(digitalRead(SensörSağ));
  delay (300);

  if(digitalRead(SensörSol) == 0 && digitalRead(SensörOrta) == 1 & digitalRead(SensörSağ) == 0){
    ileri();
  }

  if(digitalRead(SensörSol) == 0 && digitalRead(SensörOrta) == 0 & digitalRead(SensörSağ) == 1){
    Sağ();
  }

  if(digitalRead(SensörSol) == 1 && digitalRead(SensörOrta) == 0 & digitalRead(SensörSağ) == 0){
    Sol();
  }

  if(digitalRead(SensörSol) == 1 && digitalRead(SensörOrta) == 1 & digitalRead(SensörSağ) == 1){
    Dur();
  }
}

void ileri(){
  digitalWrite(MotorRl,HIGH); 
  digitalWrite(MotorR2,LOW); 
  analogWrite(MotorRE,hiz);

  digitalWrite(MotorL1,HIGH); 
  digitalWrite(MotorL2,LOW);
  analogWrite(MotorLE,hiz);
}

void Sağ(){
  digitalWrite(MotorR1,HIGH); 
  digitalWrite(MotorR2,LOW);
  analogWrite(MotorRE,75);

  digitalWrite(MotorL1,HIGH); 
  digitalWrite(MotorL2,LOW); 
  analogWrite(MotorLE,150);
}

void Sol(){
  digitalWrite(MotorR1,HIGH); 
  digitalWrite(MotorR2,LOW); 
  analogWrite(MotorRE,150);

  digitalWrite(MotorL1,HIGH);
  digitalWrite(MotorL2,LOW); 
  analogWrite(MotorLE,75);
}

void Dur(){
  digitalWrite(MotorRl,HIGH); 
  digitalWrite(MotorR2,LOW);
  analogWrite(MotorRE,0);
  
  digitalWrite(MotorL1,HIGH);
  digitalWrite(MotorL2,LOW); 
  analogWrite(MotorLE,0);

}
