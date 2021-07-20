// Sensor pins
#define sensorPower 13
#define sensorPin A2
int led =2;
int led2 =5;
int led3 =7;
// Value for storing water level
int val = 0;

void setup() {
  // Set D7 as an OUTPUT
  pinMode(sensorPower, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  // Set to LOW so no power flows through the sensor
  digitalWrite(sensorPower, LOW);
  
  Serial.begin(9600);
}

void loop() {
  //get the reading from the function below and print it
  int level = readSensor();
  
  Serial.print("Water level: ");
  Serial.println(level);
  
  delay(1000);
}

//This is a function used to get the reading
int readSensor() {
  digitalWrite(sensorPower, HIGH);  // Turn the sensor ON
  delay(10);              // wait 10 milliseconds
  val = analogRead(sensorPin);    // Read the analog value form sensor
  
  if (val <=150) {
  digitalWrite(led, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  }
  else if (val >400 && val<440) {
  digitalWrite(led, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  }
  else if (val >=460) {
  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  }
  digitalWrite(sensorPower, LOW);   // Turn the sensor OFF
  return val;             // send current reading
}
