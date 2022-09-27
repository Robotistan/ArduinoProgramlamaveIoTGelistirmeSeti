#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>
LiquidCrystal_I2C lcd(0x27, 20, 4);
Servo myservo;
int pos = 0;
int trigPin = 7;
int echoPin = 8;
int buzzerPin = 10;
int deger;
float sure = 0;
float mesafe = 0;

void setup() {
  lcd.begin();
  myservo.attach(9);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzeerpin,OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  deger =analogRead(A0);
  pos =map(deger, 0, 1023, 0, 180);
  myservo.write(pos);
  MesafeHesaplama();

if (mesafe <5.00) {
  digitalWrite(buzzerPin,HIGH);
}
  else
  digitalWrite(buzzerPin,LOW);
    lcd.home();
    lcd.print(mesafe);
    lcd.setCursor(10,0);
    lcd.println(".cm mesafede cisim vardir");
    delay(100);
    }

void MesafeHesaplama() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  sure = pulseIn(echoPin,HIGH);
  mesafe = (sure/2)/29.1;
  Serial.print(mesafe);
  Serial.println(".cm'de cisim vardır.");
  delay(50),  
}
