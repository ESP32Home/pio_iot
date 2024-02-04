#include <Arduino.h>
#include <FastLED.h>

#define NUM_LEDS      1

CRGB leds[NUM_LEDS];

void setup()
{
    Serial.begin(115200);
    FastLED.addLeds<NEOPIXEL, RGB_LED_PIN>(leds, NUM_LEDS);
    FastLED.setBrightness(10);
}
void loop()
{
    static int count = 0;
    Serial.println("RGB FastLED Colors "+String(count++));
    leds[0] = CRGB::Red;
    FastLED.show();
    delay(1000);
    leds[0] = CRGB::Green;
    FastLED.show();
    delay(1000);
    leds[0] = CRGB::Blue;
    FastLED.show();
    delay(1000);
    leds[0] = CRGB::Black;
    FastLED.show();
    delay(1000);
}
