#define kirmiziled 9
#define sariled 8
#define yesilled 7

void setup() {
  pinMode(kirmiziled,OUTPUT);
  pinMode(sariled,OUTPUT);
  pinMode(yesilled,OUTPUT);
}

void loop() {
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
