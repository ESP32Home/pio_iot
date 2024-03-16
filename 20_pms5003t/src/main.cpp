#include <Arduino.h>
#include <PMserial.h>
#ifdef RGB_LED_PIN
#include <Adafruit_NeoPixel.h>
#define NUMPIXELS      1
Adafruit_NeoPixel pixel(NUMPIXELS, RGB_LED_PIN, NEO_GRB + NEO_KHZ800);
#endif



SerialPM pms(PMSx003, RXD_PIN, TXD_PIN);


void pms_reset(){
    digitalWrite(RESET_CONTROL_PIN, LOW);
    delay(500);
    digitalWrite(RESET_CONTROL_PIN, HIGH);
    delay(500);
}

void pms_sleep(){
    digitalWrite(SET_CONTROL_PIN, LOW);
    delay(100);
}

void pms_wakeup(){
    digitalWrite(SET_CONTROL_PIN, HIGH);
    delay(100);
    pms.init();
}

void pms_read(){
    pms_wakeup();
    delay(100);
    pms.read();
    Serial.print(F("PM1.0 "));Serial.print(pms.pm01);Serial.print(F(", "));
    Serial.print(F("PM2.5 "));Serial.print(pms.pm25);Serial.print(F(", "));
    Serial.print(F("PM10 ")) ;Serial.print(pms.pm10);Serial.println(F(" [ug/m3]"));
    delay(3000);
    Serial.print(F("PM1.0 "));Serial.print(pms.pm01);Serial.print(F(", "));
    Serial.print(F("PM2.5 "));Serial.print(pms.pm25);Serial.print(F(", "));
    Serial.print(F("PM10 ")) ;Serial.print(pms.pm10);Serial.println(F(" [ug/m3]"));
    Serial.println("sleep");
    pms_sleep();
}

void setup()
{
    Serial.begin(115200);

    #ifdef RGB_LED_PIN
    pixel.begin();
    pixel.setBrightness(10);
    #endif

    digitalWrite(SET_CONTROL_PIN, LOW);     //sleep
    digitalWrite(RESET_CONTROL_PIN, LOW);   //reset
    pinMode(SET_CONTROL_PIN, OUTPUT);
    pinMode(RESET_CONTROL_PIN, OUTPUT);

    pms_reset();
    pms_wakeup();
}

void loop()
{
    static int count = 0;
    Serial.println("loop "+String(count++));
    pms_read();
    delay(10000);
}
