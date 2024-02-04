#include <Arduino.h>
#include <TFT_eSPI.h>


TFT_eSPI tft = TFT_eSPI(135, 240); // Invoke custom library

void tft_log(const String &text){
    tft.fillScreen(TFT_BLACK);
    tft.setTextDatum(MC_DATUM);
    tft.setTextColor(TFT_LIGHTGREY);
    tft.setTextSize(2);
    tft.drawString(text.c_str(),  tft.width() / 2, tft.height() / 2 );
}

void setup()
{
    Serial.begin(115200);
    tft.init();
    tft.setRotation(3);
}

void loop()
{
    static int count = 0;
    const String message = "Hello TFT "+String(count);
    Serial.println(message);
    tft_log(message);
    delay(1000);
    count++;
}
