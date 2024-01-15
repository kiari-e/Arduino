#include <LiquidCrystal.h>


// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int potpin=A0;
int flamesensor=A3;
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
  Serial.begin(9600);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  int potval=analogRead(potpin);
  int val=analogRead(flamesensor);
Serial.print("potval: ");
Serial.print(potval, HEX);
Serial.print("\t");
Serial.print("flamesensorval: ");
Serial.print(val, DEC);
Serial.println();
delay(500);

lcd.setCursor(1, 1);
 lcd.print(potval);
 
 lcd.setCursor(8,1);
 lcd.print(val);
 
}
