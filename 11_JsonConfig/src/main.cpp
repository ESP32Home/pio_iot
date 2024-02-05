#include <Arduino.h>
#include <ArduinoJson.h>
#include <ConfigUtils.h>

JsonDocument config;

void setup()
{
    Serial.begin(115200);
    load_json(config,"/config.json");
    serializeJsonPretty(config, Serial);}

void loop()
{
    static int count = 0;
    Serial.println("Hello Json Config "+String(count++));
    delay(1000);
}
