#include <Arduino.h>


#define LED_PIN 2


void setup()
{
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
}
void loop()
{
    static int count = 0;
    Serial.println("Blink "+String(count++));
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
    digitalWrite(LED_PIN, LOW);
    delay(1000);
}
