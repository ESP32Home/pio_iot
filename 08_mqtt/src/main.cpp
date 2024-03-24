#include <WiFi.h>
#include <ESPWiFiConfig.h>
#include <PubSubClient.h>

IPAddress broker(10, 0, 0, 91);

WiFiClient espClient;
PubSubClient client(espClient);

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i=0;i<length;i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();
}

void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Attempt to connect
    if (client.connect("arduinoClient")) {
      Serial.println("connected");
      // Once connected, publish an announcement...
      client.publish("esp/tester1/status","hello world");
      // ... and resubscribe
      client.subscribe("esp/tester1/service");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 10 seconds");
      delay(10000);
    }
  }
}

void setup()
{
    Serial.begin(115200);
    wifi_setup();
    client.setServer(broker, 1883);
    client.setCallback(callback);
    // Allow the hardware to sort itself out
    delay(1500);
}

void loop()
{
  if (!client.connected()) {
    reconnect();
  }
  client.loop();
}
