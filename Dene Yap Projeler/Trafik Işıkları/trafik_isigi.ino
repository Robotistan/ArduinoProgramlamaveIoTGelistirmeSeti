#define kirmiziled 9               // LED'lerimizi 7,8 ve 9 pinlere tanımlıyoruz.
#define sariled 8
#define yesilled 7

void setup() {                     //LED'lerimizi çıkış pini olarak ayarlıyoruz.
  pinMode(kirmiziled,OUTPUT);
  pinMode(sariled,OUTPUT);
  pinMode(yesilled,OUTPUT);
}
void loop() {                      //LED'lerimizi bir döngü içerisinde belirli bir zaman aralıklarıyla yanma(HIGH) ve sönme(LOW) işlemini yaptırıyoruz.
  digitalWrite(kirmiziled,HIGH);          
  digitalWrite(sariled,LOW);
  digitalWrite(yesilled,LOW);
  delay(4000);                   
  
  digitalWrite(kirmiziled,LOW);
  digitalWrite(sariled,HIGH);
  digitalWrite(yesilled,LOW);
  delay(1000);
  
  digitalWrite(kirmiziled,LOW);
  digitalWrite(sariled,LOW);
  digitalWrite(yesilled,HIGH);
  delay(4000);
  
  digitalWrite(kirmiziled,LOW);
  digitalWrite(sariled,HIGH);
  digitalWrite(yesilled,LOW);
  delay(1000);
}
