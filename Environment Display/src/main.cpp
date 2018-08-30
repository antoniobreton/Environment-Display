#include <Arduino.h>
#include <TinyOzOLED.h>
#include <TinyWireM.h>

long i=0;

void setup() {
    // put your setup code here, to run once:
    OzOled.init();
    //OzOled.setInverseDisplay(); // Invert the display
    OzOled.printString("Hi There");
    delay(5000); 
}

void loop() {
    // put your main code here, to run repeatedly:
    i++;
    OzOled.clearDisplay();
    OzOled.printNumber(i, 1, 0);
    delay(1000);

}