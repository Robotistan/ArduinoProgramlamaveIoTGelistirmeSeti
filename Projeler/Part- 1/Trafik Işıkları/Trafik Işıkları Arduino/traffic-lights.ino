#define redled 9
#define yellowled 8
#define greenled 7

void setup() {
  pinMode(redled,OUTPUT);
  pinMode(yellowled,OUTPUT);
  pinMode(greenled,OUTPUT);
}
void loop() {
  digitalWrite(redled,HIGH);
  digitalWrite(yellowled,LOW);
  digitalWrite(greenled,LOW);
  delay(4000);

  digitalWrite(redled,LOW);
  digitalWrite(yellowled,HIGH);
  digitalWrite(greenled,LOW);
  delay(1000);

  digitalWrite(redled,LOW);
  digitalWrite(yellowled,LOW);
  digitalWrite(greenled,HIGH);
  delay(4000);

  digitalWrite(redled,LOW);
  digitalWrite(yellowled,HIGH);
  digitalWrite(greenled,LOW);
  delay(1000);
}
