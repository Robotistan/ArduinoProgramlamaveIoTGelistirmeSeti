#define SensorLeft A1
#define SensorMid A2
#define SensorRight A3

#define MotorR1 4
#define MotorR2 5
#define MotorRE 3

#define MotorL1 7
#define MotorL2 6
#define MotorLE 10 

int speedd = 75;

void setup() {

  pinMode(SensorLeft,INPUT);
  pinMode(SensorMid,INPUT);
  pinMode(SensorRight,INPUT);
  Serial.begin(9600);
  Serial.println("Line sensor test");
  delay(2000);

  pinMode(MotorR1,OUTPUT);
  pinMode(MotorR2,OUTPUT);
  pinMode(MotorL1,OUTPUT);
  pinMode(MotorL2,OUTPUT);

void loop() {

  Serial.print(digitalRead (SensorLeft));
  Serial.print(",");
  Serial.print(digitalRead (SensorMid));
  Serial.print (",");
  Serial.println(digitalRead(SensorRight));
  delay (300);

  if(digitalRead(SensorLeft) == 0 && digitalRead(SensorMid) == 1 & digitalRead(sensorRight) == 0){
    Forward();
  }

  if(digitalRead(SensorLeft) == 0 && digitalRead(SensorMid) == 0 & digitalRead(sensorRight) == 1){
    Right();
  }

  if(digitalRead(SensorLeft) == 1 && digitalRead(SensorMid) == 0 & digitalRead(sensorRight) == 0){
    Left();
  }

  if(digitalRead(SensorLeft) == 1 && digitalRead(SensorMid) == 1 & digitalRead(sensorRight) == 1){
    Stop();
  }
}

void Forward(){
  digitalWrite(MotorRl,HIGH); 
  digitalWrite(MotorR2,LOW); 
  analogWrite(MotorRE,speedd);

  digitalWrite(MotorL1,HIGH); 
  digitalWrite(MotorL2,LOW);
  analogWrite(MotorLE,speedd);
}

void Right(){
  digitalWrite(MotorR1,HIGH); 
  digitalWrite(MotorR2,LOW);
  analogWrite(MotorRE,75);

  digitalWrite(MotorL1,HIGH); 
  digitalWrite(MotorL2,LOW); 
  analogWrite(MotorLE,150);
}

void Left(){
  digitalWrite(MotorR1,HIGH); 
  digitalWrite(MotorR2,LOW); 
  analogWrite(MotorRE,150);

  digitalWrite(MotorL1,HIGH);
  digitalWrite(MotorL2,LOW); 
  analogWrite(MotorLE,75);
}

void Stop(){
  digitalWrite(MotorRl,HIGH); 
  digitalWrite(MotorR2,LOW);
  analogWrite(MotorRE,0);
  
  digitalWrite(MotorL1,HIGH);
  digitalWrite(MotorL2,LOW); 
  analogWrite(MotorLE,0);

}
