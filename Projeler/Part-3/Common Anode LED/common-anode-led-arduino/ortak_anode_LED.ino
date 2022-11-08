//Ortak Anot RGB LED için Arduino Kodu

//RGB LED'imizin bacaklarını Arduino'da bağladığımız pinlere göre global değişken olarak atadık.
int kirmiziPin = 9; //Kırmızı bacak 9 numaralı pine
int yesilPin = 10; //yeşil bacak 10 numaralı pine
int maviPin = 11; //mavi bacak 11 numaralı pine 

void setup(){ 
  pinMode(kirmiziPin, OUTPUT); //kirmiziPin(9) çıkış pini olarak atadık
  pinMode(yesilPin, OUTPUT); //yesilPin(10) çıkış pini olarak atadık
  pinMode(maviPin, OUTPUT);} //mavi(11) çıkış pini olarak atadık
  
  void loop(){ 
    renkAyarla(255, 0, 0); //kirmizi 
    delay(1500); //1.5 saniye bekle
    renkAyarla(0, 255, 0); //yesil 
    delay(1500); //1.5 saniye bekle
    renkAyarla(0, 0, 255); //mavi 
    delay(1500); //1.5 saniye bekle
    renkAyarla(255, 255, 0); //sari 
    delay(1500); //1.5 saniye bekle
    renkAyarla(80, 0, 80); //mor 
    delay(1500); //1.5 saniye bekle
    renkAyarla(0, 255, 255); //acik mavi 
    delay(1500); //1.5 saniye bekle
    renkAyarla(255, 255, 255); //beyaz 
    delay(1500); //1.5 saniye bekle
    }
    
//Renk ayarla fonksiyonu oluşturduk
void renkAyarla(int kirmizi, int yesil, int mavi){ 
  kirmizi = 255-kirmizi; 
  yesil = 255-yesil; 
  mavi = 255-mavi; 
  analogWrite(kirmiziPin, kirmizi); 
  analogWrite(yesilPin, yesil); 
  analogWrite(maviPin, mavi);
  }
