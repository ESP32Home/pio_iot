#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define NUMPIXELS      1

Adafruit_NeoPixel pixel(NUMPIXELS, RGB_LED_PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
    Serial.begin(115200);
    pixel.begin();
    pixel.setBrightness(10);
}
void loop()
{
    static int count = 0;
    Serial.println("RGB Adafruit NeoPixel LED Colors "+String(count++));
    pixel.setPixelColor(0, pixel.Color(255, 0, 0)); 
    pixel.show();
    delay(1000);
    pixel.setPixelColor(0, pixel.Color(0, 255, 0)); 
    pixel.show();
    delay(1000);
    pixel.setPixelColor(0, pixel.Color(0, 0, 255)); 
    pixel.show();
    delay(1000);
    pixel.setPixelColor(0, pixel.Color(0, 0, 0)); 
    pixel.show();
    delay(1000);
}
