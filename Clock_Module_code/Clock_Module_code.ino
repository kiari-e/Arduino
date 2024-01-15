#include <virtuabotixRTC.h>                                                                              

virtuabotixRTC myRTC(6, 7, 8);
int relay =12;
int led =10;

void setup()  {      
pinMode(relay, OUTPUT);
pinMode(led, OUTPUT);
digitalWrite(led, HIGH);

  Serial.begin(9600);

// Set the current date, and time in the following format:
// seconds, minutes, hours, day of the week, day of the month, month, year
  myRTC.setDS1302Time(00, 24, 11, 5, 13, 5, 2021);
}

void loop()  {                                                                                           
// This allows for the update of variables for time or accessing the individual elements.                
  myRTC.updateTime();                                                                                    
                                                                                                         
// Start printing elements as individuals                                                                
  Serial.print("Current Date / Time: ");                                                                 
  Serial.print(myRTC.dayofmonth);                                                                        
  Serial.print("/");                                                                                     
  Serial.print(myRTC.month);                                                                             
  Serial.print("/");                                                                                     
  Serial.print(myRTC.year);                                                                              
  Serial.print("  ");                                                                                    
  Serial.print(myRTC.hours);                                                                             
  Serial.print(":");                                                                                     
  Serial.print(myRTC.minutes);                                                                           
  Serial.print(":");                                                                                     
  Serial.println(myRTC.seconds);                                                                        
                                                                                                       
 
  if (myRTC.seconds=00 && myRTC.minutes=43 && myRTC.hours=11 && myRTC.dayofweek=5 && myRTC.dayofmonth=13 && myRTC.month=5 && myRTC.year=2021 ){
    digitalWrite(relay, HIGH);
  }
  else  (myRTC.seconds=00 && myRTC.minutes=45 && myRTC.hours=11 && myRTC.dayofweek=5 && myRTC.dayofmonth=13 && myRTC.month=5 && myRTC.year=2021){
    digitalWrite(relay, LOW); 
  }
  delay(1000);                                                                                        
}                                                                                                      
