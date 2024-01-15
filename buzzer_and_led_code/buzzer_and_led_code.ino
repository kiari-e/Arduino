const int buzzer=8;
int led=3;
void setup(){
 pinMode(buzzer, OUTPUT);
 pinMode(led, OUTPUT);
}

void loop(){
tone(buzzer, 1000);
digitalWrite(led, HIGH);
delay(700);

noTone(buzzer);
digitalWrite(led, LOW);
delay(700);
}
