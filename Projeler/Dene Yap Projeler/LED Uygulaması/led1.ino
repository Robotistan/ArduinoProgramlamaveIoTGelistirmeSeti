void setup() {                //Pin 8'i çıkış olarak ayarlıyoruz
  pinMode(8,OUTPUT);
}
  
void loop() {                 
  digitalWrite(8,HIGH);       //LED çalışıyor
  delay(1000);                //1 sn bekleme süresi
  digitalWrite(8,LOW);        //LED Söndü
  delay(1000);                //1 sn bekleme süresi
}
