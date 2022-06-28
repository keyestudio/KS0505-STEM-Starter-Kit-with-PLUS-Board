/*
keyestudio STEM Starter Kit 
Project 12
Guard dog
http//www.keyestudio.com
*/

int buzzerpin = 8;  // buzzer pin
int pirPin = 3;     // PIR Out pin 
int pirStat = 0;   // PIR status 
void setup() {
 pinMode(buzzerpin, OUTPUT);     
 pinMode(pirPin, INPUT);     
 Serial.begin(9600);
}
void loop()
{
 pirStat = digitalRead(pirPin); 
 if (pirStat == HIGH)
 {            // if motion detected
   digitalWrite(buzzerpin, HIGH);  // turn buzzer ON
   Serial.println("Hey I got you!!!");
 } 
 else {
   digitalWrite(buzzerpin, LOW); // turn buzzer OFF if we have no motion
 }
}//////////////////////////////////////////////////////////
