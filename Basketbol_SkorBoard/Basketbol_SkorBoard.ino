#include <Wire.h>                                     //Kütüphanelerimizi ekliyoruz.
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcdS (0x27, 20, 4);                 //lcd'nin adresini ve boyutunu ayarlıyoruz.
LiquidCrystal_I2C lcdH (0x21, 16, 2);
LiquidCrystal_I2C lcdA (0x22, 16, 2);

#define a 2                                           //Pinleri tanımlıyoruz.
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8

#define buton_arti 9
#define buton_reset 10

#define H1S 13 
#define H2S 12 
#define H3S 11 

#define A1S A2
#define A2S A1
#define A3S A0

int period = 1;
int H_Skor = 0;
int A_Skor = 0;

void setup () {                                       //Pinleri; giriş veya çıkış pini olarak tanımlıyoruz.

  for(int i=2; i<9; i++) {
    pinMode(i,OUTPUT);
  }
  pinMode(buton_arti,INPUT);
  pinMode(buton_reset,INPUT);

  pinMode(H3S,INPUT);
  pinMode(H2S,INPUT);
  pinMode(H1S,INPUT);

  pinMode(A3S,INPUT);
  pinMode(A2S,INPUT);
  pinMode(A1S,INPUT);

  lcdS.begin();
  lcdH.begin();
  lcdA.begin();

  lcdS.clear();
  lcdH.clear();
  lcdA.clear();
}

void loop(){
  if(digitalRead(buton_arti)==1) {                    //buton_arti pininden dijital veri okunduğu zaman.
    period++;
    lcdS.setCursor(7,2);                              //Satırla arası geçiş.
    lcdS.print("PERIOD");                             //Ekrana "PERIOD" yazdır.
    lcdS.setCursor(6,3);
    lcdS.print("BASLIYOR");
    delay(1000);
    for (int j=1; j<4; j++) {                         //Ekrana sırayla nokta yazdır.                       
      lcdS.print(".");
      delay(500);
    }
    lcdS.clear();                                     //Ekranı temizle
    lcdS.setCursor(3,0);                    
    lcdS.print("TBF 1.LIG MACI");
  }
  if(period > 4) {
    period = 1;
  }

  if(digitalRead(buton_reset)==1) {
    lcdS.setCursor(0,1);
    lcdS.print("Skorboard");
    lcdS.setCursor(0,2);
    lcdS.print("Sifirlaniyor");
    delay(1000);
    for (int j=1; j<4; j++) {
      lcdS.print(".");
      delay(500);
    
  }                                                       //başlangıçta; periodu 1, skorları ise 0 olarak tanımlıyoruz.
  period = 1;
  H_Skor = 0;
  A_Skor = 0;

  lcdS.clear();
  lcdH.clear();
  lcdA.clear();
  lcdS.setCursor(3,0);
  lcdS.print("TBF 1.LIG MACI");

  lcdH.setCursor(2,0);
  lcdH.print("ANADOLU EFES");
  lcdH.setCursor(7,1);
  lcdH.print(H_Skor);
  lcdA.setCursor(3,0);
  lcdA.print("KARSIYAKA");
  lcdA.setCursor(6,1);
  lcdA.print(A_Skor);
}

if(digitalRead(H1S)==1) {                                  //H1S pininden dijital veri okuması yapıldığında.
  for (int j=1; j<4; j++) {
    lcdS.setCursor(5,2);  
    lcdS.print("! 1 SAYI !");                              //Ekrana "! 1 SAYI !" yazdır.
    delay(1000);
    lcdS.setCursor(0,2);
    lcdS.print("             ");
    delay(500);
   }
  H_Skor = H_Skor + 1; 
 }

if(digitalRead(H2S)==1) {
  for (int j=1; j<4; j++) {
    lcdS.setCursor(4,2);
    lcdS.print("! 2 SAYI !");
    delay(1000);
    lcdS.setCursor(0,2);
    lcdS.print("             ");
    delay(500);
   }
  H_Skor = H_Skor + 2; 
 }

if(digitalRead(H3S)==1) {
  for (int j=1; j<4; j++) {
    lcdS.setCursor(3,2);
    lcdS.print("! 3 SAYI !");
    delay(1000);
    lcdS.setCursor(0,2);
    lcdS.print("             ");
    delay(500);
   }
  H_Skor = H_Skor + 3; 
 }

if(digitalRead(A1S)==1) {
  for (int j=1; j<4; j++) {
    lcdS.setCursor(5,2);
    lcdS.print("! 1 SAYI !");
    delay(1000);
    lcdS.setCursor(0,2);
    lcdS.print("             ");
    delay(500);
   }
  A_Skor = A_Skor + 1; 
 }

if(digitalRead(A2S)==1) {
  for (int j=1; j<4; j++) {
    lcdS.setCursor(4,2);
    lcdS.print("! 2 SAYI !");
    delay(1000);
    lcdS.setCursor(0,2);
    lcdS.print("             ");
    delay(500);
   }
  A_Skor = A_Skor + 2; 
 }

if(digitalRead(A3S)==1) {
  for (int j=1; j<4; j++) {
    lcdS.setCursor(3,2);
    lcdS.print("! 3 SAYI !");
    delay(1000);
    lcdS.setCursor(0,2);
    lcdS.print("             ");
    delay(500);
   }
  A_Skor = A_Skor + 3; 
}

lcdS.setCursor(3,0);
lcdS.print("TBF1.LIG MACI");

lcdH.setCursor(2,0);
lcdH.print("ANADOLU EFES");
lcdH.setCursor(7,1);
lcdH.print(H_Skor);
lcdA.setCursor(3,0);
lcdA.print("KARSIYAKA");
lcdA.setCursor(6,1);
lcdA.print(A_Skor);

switch(period) {
  case 1:
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  break;

  case 2:
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  break;

  case 3:
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  break;

  case 4:
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  break;  
  }
  delay(250);
}
