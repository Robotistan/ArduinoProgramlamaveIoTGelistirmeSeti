#define red 11 //LED'imizin kırmızıyı temsil eden pini Arduino'nun 11.pinine tanımlanır
#define green 10 //Yeşili temsil eden pin 10
#define blue 9 //Maviyi temsil eden pin 9

#define pot_r A0 //Kırmızı ledi temsil eden pot tanımlanır
#define pot_g A1 //Yeşil ledi temsil eden pot tanımlanır
#define pot_b A2 //Mavi ledi temsil eden pot tanımlanır

int red_value; //Kırmızı led değeri için bir değişken tanımlanır
int green_value; //Yeşil led değeri için bir değişken tanımlanır
int blue_value; //Mavi led değeri için bir değişken tanımlanır

void deger_oku() { //Potlardan gelen değerlerin okunması için bir döngü tanımlanır

  red_value = analogRead(pot_r); //Kırmızı ledi kontrol eden potun değeri okunur
  green_value = analogRead(pot_g); //Yeşil ledi kontrol eden potun değeri okunur
  blue_value = analogRead(pot_b); //Mavi ledi kontrol eden potun değeri okunur

  red_value = map(red_value, 0, 1023, 0, 255);
  green_value = map(green_value, 0, 1023, 0, 255);
  blue_value = map(blue_value, 0, 1023, 0, 255);
  ////0-1023 arası okunan değerler map komutu ile 0-255 arası değerlere dönüştürülür
}

void deger_yaz() { //Potlardan okunan değerler RGB LED'e aktarılır

  analogWrite(red, red_value); //Kırmızı pottan gelen renk değeri RGB LED'e aktarılır
  analogWrite(green, green_value); //Yeşil pottan gelen renk değeri RGB LED'e aktarılır
  analogWrite(blue, blue_value); //Mavi pottan gelen renk değeri RGB LED'e aktarılır
}

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  //RGB LED'in Kırmızı, Yeşil ve Mavi renkleri çıkış pini olarak tanımlanır

}

void loop() { //Ana döngüde değer okuma ve değer yazma işlemleri uygulanır

  deger_oku();
  deger_yaz();
}
