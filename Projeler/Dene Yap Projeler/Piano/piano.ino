                                                                                                                            
                                                               //Notalara karşılık gelen frekanslar belirtilmiştir
#define dok  264                                              // kalın do. do komutu ile karışmasın diye dok yazıldı
#define re   297                                                
#define mi   330
#define fa   352
#define sol  396
#define la   440
#define si   495
#define doi  528                                              // ince do
                                                              //butonların bağlı olduğu pinleri belirliyoruz
const int Dokbuton = 2;
const int Rebuton = 3;
const int Mibuton = 4;
const int Fabuton = 5;
const int Solbuton = 6;
const int Labuton = 7;
const int Sibuton = 8;
const int Doibuton = 9; 
                                                              //Butonların basılı olup olmadığını belirlemek için gerekli değişkenleri tanımlıyoruz
int buttonDokdurum = 0;
int buttonRedurum = 0;
int buttonMidurum = 0;
int buttonFadurum = 0;
int buttonSoldurum = 0;
int buttonLadurum = 0;
int buttonSidurum = 0;
int buttonDoidurum = 0;
void setup() 
{ 
                                                              //Butonladan basılma değeri alacağımız için INPUT olarak ayarlıyoruz
    pinMode(Dokbuton, INPUT);
    pinMode(Rebuton, INPUT);
    pinMode(Mibuton , INPUT);
    pinMode(Fabuton, INPUT);
    pinMode(Solbuton, INPUT);
    pinMode(Labuton, INPUT);
    pinMode(Sibuton , INPUT);
    pinMode(Doibuton, INPUT);
 }
void loop() {
                                                               //Döngü içinde butonları basılma durumlarını dinlemeye alıyoruz
    buttonDokdurum = digitalRead(Dokbuton);
    buttonRedurum = digitalRead(Rebuton);
    buttonMidurum = digitalRead(Mibuton);
    buttonFadurum = digitalRead(Fabuton);
    buttonSoldurum = digitalRead(Solbuton);
    buttonLadurum = digitalRead(Labuton);
    buttonSidurum = digitalRead(Sibuton);
    buttonDoidurum = digitalRead(Doibuton);
                                                              //Butonlar basılırda buzzerdan istenen notalar çıkacaktır
      if (buttonDokdurum == HIGH) {
           tone(10, dok, 100);                                //Burada 10; buzzerin bağlı olduğu pini. 100; çalma süresini ifade ediyor
       }                                                      //dok; sesin değerini
      if (buttonRedurum == HIGH) {                            //100; çalma süresini ifade ediyor
           tone(10, re, 100);
       }
      if (buttonMidurum == HIGH) {
           tone(10, mi, 100);
       }
      if (buttonFadurum == HIGH) {
          tone(10, fa, 100);
       }
      if (buttonSoldurum == HIGH) {
           tone(10, sol, 100);
       }
      if (buttonLadurum == HIGH) {
           tone(10, la, 100);
       }
      if (buttonSidurum == HIGH) {
         tone(10, si, 100);
      }
      if (buttonDoidurum == HIGH) {
           tone(10, doi, 100);
       }   
 }
