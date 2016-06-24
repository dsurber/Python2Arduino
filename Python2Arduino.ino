#include <SoftwareSerial.h>

void setup() {
  // initialize digital pin 5 and 6 as outputs.
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  // initialize Serial library for communication at 9600 baud
  Serial.begin(9600);
  Serial.println("Ready"); // print "Ready" once
}


void loop() {
char inByte = ' ';
if(Serial.available()){ // only send data back if data has been sent
char inByte = Serial.read(); // read the incoming data
digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
Serial.println(inByte); // send the data back in a new line so that it is not all one long line
delay(100); // delay for 1/10 of a second
digitalWrite(5, LOW);   // turn the LED off (LOW is the voltage level)
}
//delay(100); // delay for 1/10 of a second

}
