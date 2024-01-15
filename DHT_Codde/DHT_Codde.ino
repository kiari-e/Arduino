#include <dht.h>



#include <Adafruit_Sensor.h>

#define DHTPIN 7;
#define DHTTYPE DHT11;
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println(F("DHTxx Test!");

DHT.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
delay(2000);

float h = dht.readHumidity();
float t = dht.readTemperature();
float f = dht.readTemperature(true);

if  (isnan(h) || isnan(t) ||isnan(f)) {
  Serial.println(F("Failed to read ftom DHT semsor!"))
  return;
}

float hif = dht.computeHeatIndex(f, h);
float hic = dht.computeHeatIndex(t, h, false);
Serial.print(F("Humidity: "));
Serial.print(h);
Serial.print(F("% Temperature: "));
Serial.print(t);
Serial.print(F("C"))
Serial.print(f);
Serial.print(F(" F Heat index: "));
Serial.print(hic);
Serial.print(F("C")
Serial.print(hif);
Serial.print(F("F"));
}
