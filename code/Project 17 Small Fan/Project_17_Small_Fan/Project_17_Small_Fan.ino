/*
keyestudio Maker learning kit
Project 17
Small Fan
http//www.keyestudio.com
*/
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 3 as an output.
  pinMode(3, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(3, HIGH);   // turn the motor on (HIGH is the voltage level)
  delay(2000);            // wait for 2 seconds
  digitalWrite(3, LOW);    // turn the motor off by making the voltage LOW
  delay(3000);            // wait for 3 second
}
//////////////////////////////////////////////////////////
