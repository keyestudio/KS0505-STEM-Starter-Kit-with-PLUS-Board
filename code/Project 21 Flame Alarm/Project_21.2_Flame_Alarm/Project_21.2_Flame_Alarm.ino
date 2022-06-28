/*
keyestudio STEM Starter Kit
Project 21.2
Flame Alarm
http//www.keyestudio.com
*/
const int red = 11;
const int green = 10;
const int blue= 9;
const int buzzer = 12;
const int flamepin = A0;
const int thereshold = 1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(flamepin, INPUT);
 
}
void setColor(int redValue, int greenValue, int blueValue)
 {
analogWrite(red, redValue);
analogWrite(blue, blueValue);
analogWrite(green, greenValue);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  int flamesenseval = analogRead(flamepin);
  Serial.print(flamesenseval);
  if (flamesenseval >= thereshold) {
    setColor(255, 0, 0); // Red Color
    tone(buzzer, 1000);
    delay(10);
  }
  else
  {
    setColor(0, 255, 0); // Green Color
    noTone(buzzer);
  }
}
//////////////////////////////////////////////////////////////////
