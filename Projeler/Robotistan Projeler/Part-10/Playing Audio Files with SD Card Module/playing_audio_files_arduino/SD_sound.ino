#include <SD.h>
#include <TMRpcm.h>
#include <SPI.h>
#define SD_ChipSelectPin 2
TMRpcm tmrpcm;

void setup() {
  // put your setup code here, to run once:
  tmrpcm.speakerPin=9;
  if(!SD.begin(SD_ChipSelecetPin)){
    return;
  }
  tmrpcm.volume(1);
}

void loop() {
  // put your main code here, to run repeatedly:
  tmrpcm.play("a.wav");
  delay(3000);
  tmrpcm.play("b.wav");
  delay(3000);
  tmrpcm.play("robotistan.wav");
  delay(3000);

}
