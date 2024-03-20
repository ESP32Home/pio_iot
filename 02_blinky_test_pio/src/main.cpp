#include <Arduino.h>


#define LED_PIN 2


void setup()
{
    Serial.begin(115200);
    pinMode(LED_PIN1, OUTPUT);
    pinMode(LED_PIN2, OUTPUT);
}
void loop()
{
    static int count = 0;
    Serial.println("Blink "+String(count++));
    digitalWrite(LED_PIN1, HIGH);
    delay(100);
    digitalWrite(LED_PIN2, HIGH);
    delay(100);
    digitalWrite(LED_PIN1, LOW);
    delay(100);
    digitalWrite(LED_PIN2, LOW);
    delay(100);
}
