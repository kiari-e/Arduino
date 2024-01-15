vo#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int flameSensorPin = A0; //  a0 
int val=0;  

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
 
}

void loop() {
  val = analogRead(flameSensorPin);  
 lcd.print("Analog reading = "); 
 lcd.println(val); // the raw analog reading delay(1000); 
 
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
  
 delay(500);
}
