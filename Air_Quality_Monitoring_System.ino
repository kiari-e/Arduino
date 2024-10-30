#include <LiquidCrystal.h>
#include <dht.h>
#define dataPin 8 // Defines pin number to which the sensor is connected
dht DHT;

#define MQ2pin 0

float sensorValue;  //variable to store sensor value


// Initialize with the pins you're using
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  

void setup() {
  lcd.begin(16, 2);  // For 16x2 LCDs
  delay(20000);
}



void loop() {
  int readData = DHT.read22(dataPin); // DHT22/AM2302
	//int readData = DHT.read11(dataPin); // DHT11

	float t = DHT.temperature; // Gets the values of the temperature
	float h = DHT.humidity; // Gets the values of the humidity
  //GAS SENSOR VALUE
  sensorValue = analogRead(MQ2pin); // read analog input pin 0

  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print((char)223);
  lcd.print("C");

  lcd.setCursor(0,1);
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print("%");

  delay(2000);

  lcd.clear();
  lcd.print("Gas Value:");
  lcd.print(sensorValue);
  delay(2000);
  lcd.clear();
  
}
