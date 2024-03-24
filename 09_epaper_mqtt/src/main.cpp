#include <Arduino.h>
#include <epaper.h>
#include <WiFi.h>
#include <ESPWiFiConfig.h>
#include <PubSubClient.h>

EPaper epaper;
IPAddress broker(10, 0, 0, 91);
WiFiClient espClient;
PubSubClient client(espClient);

void ePrint(const String &str){
  epaper.display.fillScreen(GxEPD_WHITE);
  epaper.displayText(str, 96, EPaper::CENTER_ALIGNMENT);
  epaper.display.update();
}

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  String message(payload,length);
  Serial.println(message);
  ePrint(message);
}

void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Attempt to connect
    if (client.connect("ePaperClient",NULL,NULL,"esp/epaper/status",2,true,"offline")) {
      Serial.println("connected");
      // Once connected, publish an announcement...
      client.publish("esp/epaper/status","online");
      // ... and resubscribe
      client.subscribe("esp/epaper/service");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 10 seconds");
      // Wait 10 seconds before retrying
      delay(10000);
    }
  }
}


void setup()
{
    Serial.begin(115200);
    epaper.init();

    wifi_setup();
    client.setServer(broker, 1883);
    client.setCallback(callback);
    // Allow the hardware to sort itself out
    delay(1500);

    if (esp_sleep_get_wakeup_cause() == ESP_SLEEP_WAKEUP_UNDEFINED) {
        epaper.display.fillScreen(GxEPD_WHITE);
        epaper.displayText("esp/epaper", 64, EPaper::CENTER_ALIGNMENT);
        epaper.display.update();
    }
}

void loop()
{
  if (!client.connected()) {
    reconnect();
  }
  client.loop();
}
