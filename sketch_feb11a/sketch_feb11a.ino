int led = 6;
int potentiometer = A0, potval, brightness;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int potval=analogRead(potentiometer);
int brightness = potval / 4;
  //int potval = analogRead(A0);

Serial.println(potval);

analogWrite(led, brightness);
}
