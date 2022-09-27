const int trigPin = 11;
const int echoPin = 10;
const int buzzPin = 6;
const int KirmiziLed = 7;
const int SariLed = 8;
const int YesilLed = 9;
long periyot;
long zamanlayıcı;
float mesafe;

void setup() {                                            //trig ve buzzer pinlerini çıkış pini, echo pinini giriş pini olarak ayarlıyoruz.
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {                                             //Echo pininden alınan veri bir periyoda dönüştürülür. Bu sayede mesafe ölçülmüş olur.                                  
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(echoPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  periyot = pulseIn(echoPin,HIGH);
  mesafe = 0.034*(periyot/2);                             //mesafeyi periyoda göre hesaplıyoruz.

  if(mesafe <= 10) {                                      //Eğer mesafe 10'a eşit veye küçükse buzzer çalar ve kırmızı led yanar.
    digitalWrite(buzzPin,HIGH);
    digitalWrite(KirmiziLed,HIGH);
  }
  else if (mesafe <= 25 && mesafe >10) {                  //Eğer mesafe hem 10'dan büyük hem de 25'e eşit veya küçükse buzzer çalar, kırmızı led yanar.
    digitalWrite(buzzPin,HIGH);
    digitalWrite(KirmiziLed,HIGH);
    delay(50);                                             
    digitalWrite(buzzPin,LOW);                            //Geçikmenin ardından buzzer ve kırmızı led LOW konumuna geçer
    digitalWrite(KirmiziLed,LOW);
    zamanlayıcı = mesafe*10;                              //Zamanlayıcı hesaplanır
    delay(zamanlayıcı);
  }
  else if (mesafe <= 45 && mesafe >25) {                  //Eğer mesafe hem 25'dan büyük hem de 45'e eşit veya küçükse buzzer çalar, sarı led yanar.
    digitalWrite(buzzPin,HIGH);
    digitalWrite(SariLed,HIGH);
    delay(50);
    digitalWrite(buzzPin,LOW);                            //Geçikmenin ardından buzzer ve sarı led LOW konumuna geçer
    digitalWrite(SariLed,LOW);
    zamanlayıcı = mesafe*10;                              //Zamanlayıcı hesaplanır.
    delay(zamanlayıcı);
  }
  else {                                                  //Eğer mesafe 45'ten büyükse yani yukardaki hiçbir koşulu sağlamıyorsa buzzer çalmaz, sadece yeşil led yanar.
    digitalWrite(buzzPin,LOW);
    digitalWrite(YesilLed,HIGH);
    delay(50);
    digitalWrite(YesilLed,LOW);
  }
}
