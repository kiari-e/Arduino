
int relay = 12;
int led = 10;
void setup() {
  // put your setup code here, to run once:
pinMode(relay, OUTPUT);
pinMode(led, OUTPUT);
digitalWrite(led, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(relay, HIGH);
delay(5000);
digitalWrite(relay, LOW);
delay(5000);
}
