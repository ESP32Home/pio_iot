#include <Arduino.h>
#include <ESPWiFiConfig.h>
#include <ESPRandom.h>


void setup()
{
    Serial.begin(115200);
    String Password = String(ESPRandom::get());
    Serial.println("AP= 'ESP-Test' Password='"+Password+"'");
    wifi_setup_secret("ESP-Test",Password);
}

void loop()
{
    static int count = 0;
    Serial.println("Hello Wifi "+String(count++));
    delay(1000);
}
