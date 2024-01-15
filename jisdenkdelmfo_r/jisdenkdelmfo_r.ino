int greenLedPin = 4;
int yellowLedPin = 7;
int redLedPin = 9;

int lightSensorPin = A0;
int analogValue = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(greenLedPin, OUTPUT);
pinMode(yellowLedPin,OUTPUT);
pinMode(redLedPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogValue = analogRead(lightSensorPin);
  if(analogValue < 50){            
    digitalWrite(redLedPin, HIGH);
  }
  else if(analogValue >= 50 && analogValue <= 100){
    digitalWrite(yellowLedPin, HIGH);
  }
  else{
    digitalWrite(greenLedPin, HIGH);
  }
  delay(200);
  digitalWrite(greenLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(redLedPin, LOW);
}
