/*
keyestudio STEM Starter Kit
Project 23.2
Smart Fan
http//www.keyestudio.com
*/
int motorpin = 3;    // set pin for motor
void setup() {
  Serial.begin(9600);
  pinMode(motorpin,OUTPUT);
}
void loop() {
  int Soundvalue = analogRead(A0);  // read the input analog value
  Serial.println(Soundvalue);
  if(Soundvalue>300)
  {
   digitalWrite(motorpin,HIGH); // when the analog value is bigger than the set value, turn on the motor
   for(int i=0;i<5;i++){
   delay(1000);                    // wait for 5s
   }
  }
  else{
   digitalWrite(motorpin,LOW);      // turn off the motor
    }
}
//////////////////////////////////////////////////////////
