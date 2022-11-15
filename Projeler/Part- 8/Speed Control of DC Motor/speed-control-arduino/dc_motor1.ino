int motorPin = 3;
int hiz = 0; 
void setup() 
{ 
pinMode(motorPin, OUTPUT);
} 
void loop() 
{ 
 for(hiz = 0; hiz &lt;= 255; hiz++) 
 { 
  analogWrite(motorPin,hiz); delay(20); 
 } 
 for(hiz = 255; hiz>=0; hiz--) 
{ 
 analogWrite(motorPin,hiz); 
 delay(20); 
} }
