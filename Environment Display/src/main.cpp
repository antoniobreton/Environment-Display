#include <Arduino.h>


int outputFreq = 4;
unsigned long timeUS = 0;

void setup() {
    // put your setup code here, to run once:
  pinMode(outputFreq, OUTPUT);

}

void loop() {
    // put your main code here, to run repeatedly:
    timeUS = micros();
    digitalWrite(outputFreq, HIGH);
    delayMicroseconds(3); 
    digitalWrite(outputFreq, LOW);
    delayMicroseconds(3);
}