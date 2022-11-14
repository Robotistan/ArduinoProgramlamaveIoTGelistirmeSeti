
#include <SD.h>
#define SD_ChipSelectPin 2
#include <TMRpcm.h>

TMRpcm tmrpcm;

void setup() {

  tmrpcm.speakerPin = 9;

  if (!SD.begin(SD_ChipSelectPin)) {
  return;
  }
  tmrpcm.volume(1);
  }

void loop() {

     tmrpcm.play("1.wav");
     delay(1000);
     tmrpcm.play("sound.wav");
     delay(13000);
     tmrpcm.play("6.wav");
     delay(1000);

   }



}
