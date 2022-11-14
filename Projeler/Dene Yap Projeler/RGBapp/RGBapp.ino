int pot_pin = A0;                                   //Potansiyometre pinini, analog pin A0 olarak tanımlıyoruz.
int pot_deger = 0;                                  //Potansiyometre değerini sıfır olarak tanımlıyoruz.

int kirmizi_pin = 9;                                //Kırmızı led pinini 9. pin olarak tanımlıyoruz.
int yesil_pin = 10;                                 //Yeşil led pinini 10. pin olarak tanımlıyoruz.
int mavi_pin = 11;                                  //Mavi led pinini 11. pin olarak tanımlıyoruz.

int kirmizi_deger = 0;                              //Kırmızı ledin değerini sıfır olarak tanımlıyoruz.
int yesil_deger = 0;                                //Yeşil ledin değerini sıfır olarak tanımlıyoruz.
int mavi_deger = 0;                                 //Mavi ledin değerini sıfır olarak tanımlıyoruz.


void setup() {                                      //Led pinlerini çıkış pini olarak ayarlıyoruz.                
  pinMode(kirmizi_pin,OUTPUT);
  pinMode(yesil_pin,OUTPUT);
  pinMode(mavi_pin,OUTPUT);

}

void loop() {
  pot_deger = analogRead(pot_pin);                  //Potansiyometre değerini belirlemek için potansiyometre pininden analog veri okuma yapıyoruz.

  if(pot_deger < 341) {
    pot_deger = (pot_deger*3)/4;

    kirmizi_deger = 255- pot_deger;
    yesil_deger = pot_deger;
    mavi_deger = 0;
  }
  else if(pot_deger < 682){
     pot_deger = (pot_deger-341)*3/4;

     kirmizi_deger = 0;
     yesil_deger = 255- pot_deger;
     mavi_deger = pot_deger;
  }
  else{
    pot_deger = (pot_deger-683)*3/4;

     kirmizi_deger = pot_deger;
     yesil_deger = 0;
     mavi_deger = 255-pot_deger;
  }
  analogWrite(kirmizi_pin, 255-kirmizi_deger);
  analogWrite(yesil_pin, 255-yesil_deger);
  analogWrite(mavi_pin, 255-mavi_deger);

}
