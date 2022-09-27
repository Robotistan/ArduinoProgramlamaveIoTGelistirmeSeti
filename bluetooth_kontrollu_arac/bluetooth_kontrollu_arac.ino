#define MotorR1 3                                          // Sağ sol motorların pinleri tanımlandı.
#define MotorR2 4
#define MotorRE 5

#define MotorL1 8
#define MotorL2 7
#define MotorLE 6 

int hiz =100;                                               // Hız değeri tam sayı cinsinden belirlendi. 
char veri;

void setup() {                                              //Motor pinleri, çıkış pini olarak ayarlandır.
  pinMode(MotorR1,OUTPUT);
  pinMode(MotorR2,OUTPUT);
  pinMode(MotorRE,OUTPUT);
  pinMode(MotorL1,OUTPUT);
  pinMode(MotorL2,OUTPUT);
  pinMode(MotorLE,OUTPUT);
  Serial.begin(9600);
}

void loop() {                                                //Okunan veriye göre aracın istenilen yönde ilerlemesi için hangi motorların çalışması gerektiği belirlenir.   

  while(Serial.available()) {
    veri=Serial.read();

  switch(veri) {
    case 'W': //İleri
  {
    digitalWrite(MotorRl,HIGH); 
    digitalWrite(MotorR2,LOW); 
    analogWrite(MotorRE,hiz); 

    digitalWrite(MotorL1,HIGH); 
    digitalWrite(MotorL2,LOW);
    analogWrite(MotorLE,hiz);
    break; 
  }
  case 'S': //Geri
  {
    digitalWrite(MotorRl,LOW); 
    digitalWrite(MotorR2,HIGH); 
    analogWrite(MotorRE,hiz); 

    digitalWrite(MotorL1,LOW); 
    digitalWrite(MotorL2,HIGH);
    analogWrite(MotorLE,hiz);
    break; 
  }
  case 'A': //Sol
  {
    digitalWrite(MotorRl,HIGH); 
    digitalWrite(MotorR2,LOW); 
    analogWrite(MotorRE,hiz); 

    digitalWrite(MotorL1,LOW); 
    digitalWrite(MotorL2,LOW);
    analogWrite(MotorLE,hiz);
    break; 
  }
  case 'D': //Sağ
  {
    digitalWrite(MotorRl,LOW); 
    digitalWrite(MotorR2,LOW); 
    analogWrite(MotorRE,hiz); 

    digitalWrite(MotorL1,HIGH); 
    digitalWrite(MotorL2,LOW);
    analogWrite(MotorLE,hiz);
    break; 
  }
  case 'K': //hızlanma
  {
    if(hiz<255) {
      hiz=hiz+5;
      break;
    }
  }
  case 'L': //yavaşlama
  {
    if(hiz>0) {
      hiz=hiz-5;
      break;
      }
  }
  case 'O'://Dur
  {
    digitalWrite(MotorRl,LOW); 
    digitalWrite(MotorR2,LOW); 
    analogWrite(MotorRE,hiz);

    digitalWrite(MotorL1,LOW); 
    digitalWrite(MotorL2,LOW);
    analogWrite(MotorLE,hiz);
    break;
   }
  }
 }
}
