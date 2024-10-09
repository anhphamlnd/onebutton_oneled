#include <Arduino.h>
#include "LED.h"
#include <OneButton.h> 
void btnPush();
void btndouble();
LED led(LED_PIN, LED_ACT);
OneButton button(BTN_PIN, !BTN_ACT);

void setup()
{
    led.off();
    button.attachClick(btnPush);
    button.attachDoubleClick(btndouble);
}

void loop()
{   unsigned long now = millis();
    led.loop();
    button.tick();
    
}

void btnPush()
{
    led.flip();
}
void btndouble() 
{
    led.blink(100);
}
