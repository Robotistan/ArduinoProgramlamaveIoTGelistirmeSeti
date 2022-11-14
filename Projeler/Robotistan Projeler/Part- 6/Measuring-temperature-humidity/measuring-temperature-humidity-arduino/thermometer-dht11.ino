#include <DHT11.h>
int dht11Pin=2;
float temperature,humidity;
DHT11 dht11;

void setup()  {
  
}

void loop() {
  Serial.begin(9600);
  Serial.println("value:");
  dht11.read(dht11Pin);
  temperature_value=(float)DHT11.temperature;
  humidity_value=(float)DHT11.humidity;
  Serial.println(temperature_value);
  Serial.println(humidity_value);
  delay(3000);
}
