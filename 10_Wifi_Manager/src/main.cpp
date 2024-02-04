#include <Arduino.h>
#include <ESPWiFiConfig.h>


void setup()
{
    Serial.begin(115200);
    wifi_setup();
}

void loop()
{
    static int count = 0;
    Serial.println("Hello Wifi "+String(count++));
    delay(1000);
}
