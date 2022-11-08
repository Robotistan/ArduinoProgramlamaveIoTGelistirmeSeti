#include <MFRC522.h>                        //RFID okuyucu kütüphanesi ekliyoruz.
#include <Servo.h>                          //Servo motor kütüphanesi ekliyoruz.
#include <SPI.h>                            //SPI haberleşme kütüphanesi ekliyoruz.

#define RST_PIN 9                           //RFID okuyucunun Reset pinini 9. pine tanımlıyoruz.
#define SS_PIN 10                           //RFID okuyucunun SDA pinini 10. pine tanımlıyoruz.
#define Servo_PIN 8                         //Servo motorun veri pinini 8. pine tanımlıyoruz.

Servo kapi;                                 //Servo motoru kapi adından bir nesne olarak tanımlıyoruz.
MFRC522 rfid(SS_PIN, RST_PIN);              //RFID okuyucu rfid adında bir nesne olarak tanımlıyoruz.
byte ID[4] = {196,25480,131};               //Doğru kartın numarasını byte türünde ID dizisine tanımlıyoruz. 

void setup() {
  kapi.attach(Servo_PIN);                   //Servo motorumuzu attach komutu ile hangi pinde olduğunu atıyoruz.
  Serial.begin(9600);                       //Serial monitorde kart numaralarını görebilmek için serial haberleşmeyi başlatıyoruz.
  SPI.begin();                              //Arduino ile RFID okuyucunun haberleşmesi için SPI haberleşmeyi başlatıyoruz.
  rfid.PCD_Init();                          //RFID okuyucuyu başlatıyoruz.
}

void loop() {

  if(!rfid.PICC_ISNewCardPresent())         //RFID okuyucu kart veya anahtarlık gösterilmediğinde programın başa dönmesini sağlıyoruz.
      return;
  if(!rfid.PICC_ReadCardSerial())           //RFID okuyucu okuma yapmadığında programın başa dönmesini sağlıyoruz.
      return;
  if(rfid.uid.uidByte[0] == ID[0] &&        //RFID okuyucuya okutulan kart veya anahtarlığın numarasını kontrol ediyoruz. 
     rfid.uid.uidByte[1] == ID[1] &&
     rfid.uid.uidByte[2] == ID[2] &&
     rfid.uid.uidByte[3] == ID[3] {
      Serial.println("Kapi acildi...");     //Eğer doğru kart okutuldu ise Serial Monitöre kapı açıldı yazısı yazdırıyoruz.
      ekranayazdir();                       //Okunan kart veya anahtarlığın numarasını aşağıda tanımlanan ekrana yazdır fonksiyonu ile yazdırıyoruz.
      kapi.write(180);                      //Kapı isimli servo motorumuzu 180 dereceye getirerek kapımızı açıyoruz.
      delay(5000);                          //Kapıyı 5 saniye süre ile açık bekletiyoruz.
      kapi.write(0);                        //Kapıyı tekrar kapatıyoruz.
      Serial.println("Kapi kapaniyor...");  //Serial monitöre kapı kapanıyor yazdırıyoruz.
      delay(1000);                          //Yeni kart okumadan 1 sanşye bekleme yapmasını sağlıyoruz.
     }
     else {
      Serial.println("!!! Yanlis Kart !!!") //Eğer doğru kart okunamadı ise Serail Monitöre yanlış kart yazısını yazdırıyoruz.
      ekranayazdir();                       //Okunan kart veya anahtarlığın numarasını aşağıda tanımlanan ekrana yazdır fonksiyonu ile yazdırıyoruz.
     }
     rfid.PICC_HaltA();                     //RFID okuyucuyu yeni kart okuyana kadar durduruyoruz.
}

void ekranayazdir() {                       //ekranayazdir fonksiyonumuzu oluşturuyoruz.
  Serial.print("ID Numarasi:  ");           //Serial Monitöre ID Numarası yazdırıyoruz.
  for(int i=0; i<4; i++) {                  //Anahtarlık veya kartın numarasını 4 bölümden oluştuğu için for döngüsünde 4 defa aynı işlemi yaptırıyoruz.
    Serial.print(rfid.uid.uidByte[i]);      //Anahtarlık veya kartın numarasının her bölümünü yazdırıyoruz.
    Serial.print("  ");                     //Her byte arasına boşluk yazdırıyoruz.
  }
  Serial.println("");                       //Her kart okumasından sonra da alt satıra geçmesini sağlıyoruz.
}
