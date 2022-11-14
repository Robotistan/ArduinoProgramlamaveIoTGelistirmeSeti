int trigPin = 12;
int echoPin = 13;
long sure, mesafe;

void setup () {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(2, OUTPUT);
  delay(3000);
}

void loop () {
  mesafe_Fonk();
  Serial.print(mesafe);
  Serial.println(" cm uzaklıkta");
  if (mesafe <= 20 && mesafe >= 15) {
    digitalWrite(2, HIGH);
  }
  else if (mesafe <= 14 && mesafe >= 10) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
  }
  else if (mesafe <= 9 && mesafe >= 5) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  else if (mesafe <= 4) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    buzerSinyal();
  }
  else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
}

void buzerSinyal() {
  digitalWrite(6, HIGH);
  delay(200);
  digitalWrite(6, LOW);
  delay(200);
}
void mesafe_Fonk() {                    
  digitalWrite(trigPin, LOW);
  delayMicroseconds(3);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  sure = pulseIn(echoPin, HIGH);
  mesafe = (sure / 29.1) / 2;
  return mesafe;                     
