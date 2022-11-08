#define SensorLeft A1
#define SensorMid A2
#define SensorRight A3

#define MotorR1 4
#define MotorR2 5
#define MotorRE 3

#define MotorL1 7
#define MotorL2 6
#define MotorLE 10 

#include <Wire.h>
#include <LiquidCrystal-I2C.h>
LiquidCrystal_I2C lcd (0x27, 20, 4);

#include <SD.h>
#define SD_ChipSelectPin 2
#include <TMRpcm.h>
#include <SPI.h>

TMRpcm tmrpcm;

int speedd=75;
int condition=0;

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

   tmrpcm.speakerPin = 9;

   if (!SD:begin(SD_ChipSelectPin)) {
   return;
   }
 tmrpcm.volume(1);
}


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
    condition=condition+1;
    if (condition==1) {
    lcd.begin();
    lcd.backlight();
    lcd.print("1.eser bilgisi");
    lcd.blink();
    tmrpcm.play("1.wav");
    delay(30000);
    led.noBlink();
    lcd.clear();
    led.noDisplay();
    delay(2000);
    lcd.noBacklight();
    delay(2000);
    Forward();
    delay(1500);
    }
    if (kosul>1) {
    lcd.begin();
    lcd.backlight ();
    lcd.print ("2. eser bilgisi");
    lcd.blink();
    tmrpcm.play("2.way");
    delay(40000);
    lcd.noBlink();
    lcd.clear(); 
    lcd.home();
    lcd.print ("Bye Bye..."); 
    delay(2000);
    lcd.noDisplay();
    delay(2000);
    lcd.noBacklight();
    delay(2000);
    }
}
 if(digitalRead(SensorLeft) == 0 && digitalRead(SensorMid) == 0 & digitalRead(sensorRight) == 0){
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
