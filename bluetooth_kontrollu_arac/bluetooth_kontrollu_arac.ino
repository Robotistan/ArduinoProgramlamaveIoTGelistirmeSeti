#define MotorR1 3
#define MotorR2 4
#define MotorRE 5

#define MotorL1 8
#define MotorL2 7
#define MotorLE 6 

int speedd =100;
char data;

void setup() {
  pinMode(MotorR1,OUTPUT);
  pinMode(MotorR2,OUTPUT);
  pinMode(MotorRE,OUTPUT);
  pinMode(MotorL1,OUTPUT);
  pinMode(MotorL2,OUTPUT);
  pinMode(MotorLE,OUTPUT);
  Serial.begin(9600);
}

void loop() {

  while(Serial.available()) {
    data=Serial.read();

  switch(data) {
    case 'W'://forward
  {
    digitalWrite(MotorRl,HIGH); 
    digitalWrite(MotorR2,LOW); 
    analogWrite(MotorRE,speedd); 

    digitalWrite(MotorL1,HIGH); 
    digitalWrite(MotorL2,LOW);
    analogWrite(MotorLE,speedd);
    break; 
  }
  case 'S'://backward
  {
    digitalWrite(MotorRl,LOW); 
    digitalWrite(MotorR2,HIGH); 
    analogWrite(MotorRE,speedd); 

    digitalWrite(MotorL1,LOW); 
    digitalWrite(MotorL2,HIGH);
    analogWrite(MotorLE,speedd);
    break; 
  }
  case 'A'://Left
  {
    digitalWrite(MotorRl,HIGH); 
    digitalWrite(MotorR2,LOW); 
    analogWrite(MotorRE,speedd); 

    digitalWrite(MotorL1,LOW); 
    digitalWrite(MotorL2,LOW);
    analogWrite(MotorLE,speedd);
    break; 
  }
  case 'D'://Right
  {
    digitalWrite(MotorRl,LOW); 
    digitalWrite(MotorR2,LOW); 
    analogWrite(MotorRE,speedd); 

    digitalWrite(MotorL1,HIGH); 
    digitalWrite(MotorL2,LOW);
    analogWrite(MotorLE,speedd);
    break; 
  }
  case 'K'://speed up
  {
    if(speedd<255) {
      speedd=speedd+5;
      break;
    }
  }
  case 'L'://speed reduction
  {
    if(speedd>0) {
      speedd=speedd-5;
      break;
      }
  }
  case 'O'://stop
  {
    digitalWrite(MotorRl,LOW); 
    digitalWrite(MotorR2,LOW); 
    analogWrite(MotorRE,speedd);

    digitalWrite(MotorL1,LOW); 
    digitalWrite(MotorL2,LOW);
    analogWrite(MotorLE,speedd);
    break;
   }
  }
 }
}
