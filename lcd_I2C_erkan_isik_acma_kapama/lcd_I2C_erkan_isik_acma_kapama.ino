#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);         //lcd adresini 0x27'e ayarlıyoruz ve lcd boyutunu 16x2 olarak ayarlıyoruz.

void setup(){
  lcd.begin();
}

void loop() {
  lcd.noBacklight();                       //Ekranın arka plan ışığı 2,5 saniye boyunca kapalı kaldıktan sonra açılıyor.
  delay(2500);
  lcd.backlight();
  
  lcd.display();                            //Lcd'ye gönderilen verileri göster.
  lcd.home();                               //İmlecin ekrana gelmesini istediğimiz yeri giriyoruz.
  lcd.clear();                              //Ekranı temizle.
  delay(1000);
  lcd.print("Ekran aciliyor");              //Ekrana "Ekran aciliyor" yazısını yazdırıyoruz.
  delay(500);

  for(int i=1; i<4; i++) {
    lcd.print(".");
    delay(500);
  }

  lcd.blink();                                //Yanıp sönme belirteci
  delay(2500);
  lcd.noBlink();
  lcd.clear();
  delay(1000);
  lcd.setCursor(7,1)                          //Satırlar arası geçiş.
  lcd.print("DENEYAP");
  delay(2500);

  for(int j=1; j<6; j++) {
    lcd.noBacklight();
    delay(1000);
  }
  lcd.clear();                                  //Ekranı temizle.
  delay(1000);                
  lcd.print("Ekran Kapaniyor!");                //Ekrana "Ekran Kapaniyor!" yazdır.
  delay(1500);
  lcd.noDisplay();                              //Ekrana gönderilen verileri gizle.
  delay(1000);
  lcd.noBacklight();                            //Ekranın arka plan ışıklarını kapat.
  delay(2500);
}
