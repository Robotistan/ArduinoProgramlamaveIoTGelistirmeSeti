#define egim 2
#define buz 3
#define led 4

void setup() {
  // put your setup code here, to run once:
  pinMode(egim,INPUT);
  pinMode(buz,OUTPUT);
  pinMode(led,OUTPUT);
  
}


void loop() {
  // put your main code here, to run repeatedly:
  int deger=digitalRead(egim);
  if(deger==LOW)
  {
   digitalWrite(buz,HIGH);
   digitalWrite(led,HIGH);
   delay(2000);
   digitalWrite(buz,LOW);
   digitalWrite(led,LOW);
   delay(1000);
  }
  else
  {
   digitalWrite(buz,LOW);
   digitalWrite(led,LOW);
  }
}
