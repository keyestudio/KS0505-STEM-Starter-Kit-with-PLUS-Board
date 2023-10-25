/*
keyestudio STEM Starter Kit 
Project 6
Battery Billboard
http//www.keyestudio.com
*/
int BASE = 2 ;// the I/O pin for the first LED
int NUM = 5; // number of LEDs
void setup()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     pinMode(i, OUTPUT);   // set I/O pins as output
   }
}
void loop()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, LOW); // set I/O pins as “low”, turn off LEDs one by one.
     delay(200); // delay
   }
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, HIGH);   // set I/O pins as “high”, turn on LEDs one by one
     delay(200);  // delay
   }  
}
//////////////////////////////////////////////////////////////////
