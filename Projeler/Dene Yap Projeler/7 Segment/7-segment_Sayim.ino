#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8
#define dp 9

void setup() {                 //Tanımlanan pinleri modlarını OUTPUT olarak ayarlıyoruz.
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(dp,OUTPUT);
}
   
void loop() {
  sifir();
  off();
  bir();
  off();
  iki();
  off();
  uc();
  off();
  dort();
  off();
  bes();
  off();
  alti();
  off();
  yedi();
  off();
  sekiz();
  off();
  dokuz();
  off();
  nokta();
  off();
}

void sifir(){                  // 0 olması için sadece g'nin sönük olması gerekir. O yüzden g'yi LOW yapıyoruz.                               
    digitalWrite(a,HIGH); 
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
    digitalWrite(dp.LOW);
    delay(1000);               //1 saniye bekletiyoruz
}

void bir(){                    // 1 olması için sadece b ve c yanık olması gerekir
    digitalWrite(a,LOW); 
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    digitalWrite(dp.LOW);
    delay(1000);               //1 saniye bekletiyoruz
}

void iki(){                    //2 rakamını oluşturabilmemiz için a,b,d,e,g harflerinin yakmamız gerekir 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
    digitalWrite(dp.LOW);
    delay(1000);                //1 saniye bekletiyoruz
}

void uc() {                    //3 rakamını oluşturabilmemiz için a,b,c,d,g harflerini yakmamız gerekir
    digitalWrite(a,HIGH); 
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
    digitalWrite(dp.LOW);
    delay(1000);              //1 saniye bekletiyoruz
}

void dort() {                 //4 rakamını oluşturabilmemiz için b,c,f,g harflerini yakmamız gerekir
    digitalWrite(a,LOW); 
    digitalWrite(b,HIGH);.
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(dp.LOW);
    delay(1000);               //1 saniye bekletiyoruz
}

void bes() {                   // 5 rakamını oluşturabilmemiz için a,c,d,f,g harflerini yakmamız gerekir
    digitalWrite(a,HIGH); 
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(dp.LOW);
    delay(1000);               //1 saniye bekletiyoruz
}

void alti() {                  // 6 rakamını oluşturabilmemiz için a,c,d,e,f,g harflerini yakmamız gerekir
    digitalWrite(a,HIGH); 
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(dp.LOW);
    delay(1000);               //1 saniye bekletiyoruz
}

void yedi() {                  // 7 rakamını oluşturabilmemiz için a,b,c, harflerini yakmamız gerekir
    digitalWrite(a,HIGH); 
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    digitalWrite(dp.LOW);
    delay(1000);                //1 saniye bekletiyoruz
}


void sekiz() {                 //8 rakamını oluşturabilmemiz için tüm harfleri yakmamız gerekir
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(dp.LOW);
    delay(1000);                //1 saniye bekletiyoruz
}

void dokuz() {                  //9 rakamını oluşturabilmemiz için a,b,c,d,f,g harflerini HIGH Yapmamız gerekir
    digitalWrite(a,HIGH); 
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(dp.LOW);
    delay(1000);                //1 saniye bekletiyoruz

} 

void nokta() {                  //nokta oluşturmamız için sadece dp harfini HIGH durumuna alıyoruz.
    digitalWrite(a,LOW); 
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    digitalWrite(dp.HIGH);
    delay(1000);                  //1 saniye bekletiyoruz
}

void off() {                      //display off durumunda olması için tüm harfleri LOW durumunda tutuyoruz.
    digitalWrite(a,LOW); 
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    digitalWrite(dp,LOW);
    delay(1000);                  //1 saniye bekletiyoruz
  
}
