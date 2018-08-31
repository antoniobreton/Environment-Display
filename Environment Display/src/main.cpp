#include <Arduino.h>
#include <TinyOzOLED.h>
#include <TinyWireM.h>



long i=0;
byte brightness = 0;

void setup() {
    // put your setup code here, to run once:
    OzOled.init();
    OzOled.setInverseDisplay(); // Invert the display
    delay(5000);
    OzOled.printString("Hi There");
    delay(5000); 
    OzOled.clearDisplay();
    OzOled.printString("Brightness:", 0, 2);
    delay(1000);

}

void loop() {
    // put your main code here, to run repeatedly:
    OzOled.setBrightness(brightness++);
    OzOled.printNumber((long)brightness, 12, 2);
    delay(100);

    if(brightness >= 255){
        brightness = 0;
        OzOled.printString("   ", 12, 2);
    }
}