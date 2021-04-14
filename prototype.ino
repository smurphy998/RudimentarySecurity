#include <SoftwareSerial.h>

SoftwareSerial mySerial(3,2);
#define DELAY 1000
#define baud 9600
#define SensorPin 4 //5 will be the other end of it
#define SensorPin2 6 //7 will be the other end of the break beam
#define SensorPin3 8 //9 will be the other end of this break beam
void setup() {
  mySerial.begin(baud);
  pinMode(SensorPin,INPUT);
}

void loop() {
 if(digitalRead(SensorPin)==HIGH){
    mySerial.write("Break in");
 }
  if(digitalRead(SensorPin2)==HIGH){
    mySerial.write("Break in");
 }
  if(digitalRead(SensorPin3)==HIGH){
    mySerial.write("Break in");
 }
}
