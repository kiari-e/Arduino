int flameSensorPin = A0; //  a0 
int val=0;  

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
val = analogRead(flameSensorPin);  
 Serial.print("Analog reading = "); 
 Serial.println(val); // the raw analog reading delay(1000); 
 delay(500);
}
