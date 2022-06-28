/*
keyestudio STEM Starter Kit 
Project 25.1
Read Ultrasonic Sensor value
http//www.keyestudio.com
*/
const int trig = 6;
const int echo = 5;
int duration = 0;
int distance = 0;
void setup() 
{
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(trig , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig , LOW);
  duration = pulseIn(echo , HIGH);
  distance = (duration/2) / 28.5 ;
  Serial.println(distance);
}
