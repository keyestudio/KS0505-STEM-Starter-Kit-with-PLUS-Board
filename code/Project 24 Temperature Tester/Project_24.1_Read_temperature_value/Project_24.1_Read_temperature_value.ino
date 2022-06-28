/*
keyestudio STEM Starter Kit
Project 24.1
Read temperature value
http//www.keyestudio.com
*/
#define sensorPin  A0
void setup()
{
   Serial.begin(9600);
}
void loop()
{
  int reading = analogRead(sensorPin);
  float voltage = reading * 5.0;
  voltage /= 1024.0;
  float temperatureC = (500 * reading) /1024 ;
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  Serial.print(voltage); Serial.print(" volts  -  ");
  Serial.print(temperatureC); Serial.print(" degrees C  -  ");
  Serial.print(temperatureF); Serial.println(" degrees F");
  delay(1000);
}
//////////////////////////////////////////////////////////////////
