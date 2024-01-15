#include <LiquidCrystal.h>
const int rs=12, en=11, d4=5, d5=4, d6=3, d7=2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

byte customChar [] = {
  B11000,
  B10100,
  B11000,
  B10100,
  B11000,
  B00000,
  B00000,
  B00000
};
byte a[] = {
  B10010,
  B10100,
  B11000,
  B10100,
  B10010,
  B00000,
  B00000,
  B00000,
};
byte  b[] = {
  B10010,
  B10100,
  B11000,
  B10100,
  B10010,
  B00000,
  B00000,
  B00000,
};


byte  c[] = {
  B01010,
  B00000,
  B10001,
  B01110,
  B00000,
  B00000,
  B00000,
  B00000,
};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, customChar);
  lcd.createChar(1, a);
  lcd.createChar(2, b);
  lcd.createChar(3, c);
  lcd.home();
  lcd.write((byte)0);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.write((byte)0);
  lcd.setCursor(2,0);
  lcd.write((byte)1);
  lcd.setCursor(4,0);
  lcd.write((byte)2);
  lcd.setCursor(6,0);
  lcd.write((byte)3);
  }
