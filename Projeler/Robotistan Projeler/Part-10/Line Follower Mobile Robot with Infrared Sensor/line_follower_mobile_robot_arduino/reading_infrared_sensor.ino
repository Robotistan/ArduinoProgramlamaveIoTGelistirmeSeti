#define SensorSol 10
#define SensorOrta 11   // Sensör pinlerini tanımlıyoruz.
#define SensorSag 12

void setup() {

  pinMode(SensorSol, INPUT);
  pinMode(SensorOrta, INPUT); //Sensörlerimizi giriş olarak tanımlıyoruz.
  pinMode(SensorSag, INPUT);
  Serial.begin(9600);  //Seri haberleşmeyi başlatıyoruz.
  Serial.println("Cizgi Sensoru Testi");
  delay(2000);
}

void loop() {
  Serial.print(digitalRead(SensorSol));
  Serial.print(",");
  Serial.print(digitalRead(SensorOrta));
  Serial.print(",");
  Serial.println(digitalRead(SensorOrta));
  delay(100);
}
