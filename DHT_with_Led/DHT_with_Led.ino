#include <dht.h>

dht DHT;

#define DHT11_PIN 7
const int led=10;
const int led2=8;
int temp =DHT.temperature;
void setup(){
 pinMode(led, OUTPUT);
 pinMode(led2, OUTPUT);
  
  Serial.begin(9600);
}

void loop(){
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  if (temp <=23)
  {
    digitalWrite(led, HIGH);
    digitalWrite(led2, LOW);
  }
  else if (temp >23)
  {
    digitalWrite(led, LOW);
    digitalWrite(led2, HIGH);
  }
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  }
  delay(2000);
}
