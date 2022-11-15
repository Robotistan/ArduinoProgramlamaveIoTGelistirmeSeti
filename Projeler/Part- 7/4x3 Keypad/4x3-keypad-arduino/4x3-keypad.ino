#include <Keypad.h>
const byte row = 4;
const byte column = 3;
String Password;
char numbers[row][column] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'#','0','*'},


};
byte rowPin[row] = { 9, 10, 11, 12 };
byte columnPin[column] = { 5, 6, 7 };
Keypad keypad = Keypad( makeKeymap(keys), rowPin, columnPin, row, column);

void setup() {
  Serial.begin(9600);
}

void loop(){
  char key = keypad.getKey();
  if(key){
    Password=Password+key;
    Serial.println(Password);
    delay(15);
  }
}
