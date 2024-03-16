#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include <Wire.h>
#include <SparkFunBME280.h>

#define NUMPIXELS      1

Adafruit_NeoPixel pixel(NUMPIXELS, RGB_LED_PIN, NEO_GRB + NEO_KHZ800);

BME280 bme_sensor;

void i2c_scan(){
    byte error, address;
    int nDevices;

    Serial.println("Scanning...");
    pixel.setPixelColor(0, pixel.Color(0, 0, 255)); 
    pixel.show();

    nDevices = 0;
    for (address = 1; address < 127; address++ ) {
        Wire.beginTransmission(address);
        error = Wire.endTransmission();

        if (error == 0) {
            Serial.print("I2C device found at address 0x");
            if (address < 16) {
                Serial.print("0");
            }
            Serial.print(address, HEX);
            Serial.println("  !");

            nDevices++;
        }
        else if (error == 4) {
            Serial.print("Unknown error at address 0x");
            if (address < 16) {
                Serial.print("0");
            }
            Serial.println(address, HEX);
        }
    }
    delay(500);
    pixel.setPixelColor(0, pixel.Color(0, 0, 0)); 
    pixel.show();
    delay(500);
    if (nDevices == 0) {
        pixel.setPixelColor(0, pixel.Color(255, 0, 0)); 
        pixel.show();
        Serial.println("No I2C devices found\n");
    }
    else {
        pixel.setPixelColor(0, pixel.Color(0, 255, 0)); 
        pixel.show();
        Serial.println("done\n");
    }
    delay(500);
    pixel.setPixelColor(0, pixel.Color(0, 0, 0)); 
    pixel.show();
}

void init_bme280(){
    bme_sensor.setI2CAddress(BME_ADD);
    if (bme_sensor.beginI2C() == false) //Begin communication over I2C
    {
        Serial.println("The sensor did not respond from add 0x"+String(BME_ADD, HEX)+". Please check wiring.");
        while(1); //Freeze
    }
}

void read_bme_280(){
    Serial.print("Humidity: ");
    Serial.print(bme_sensor.readFloatHumidity(), 0);
    Serial.print(" Pressure: ");
    Serial.print(bme_sensor.readFloatPressure(), 0);
    Serial.print(" Temp: ");
    Serial.print(bme_sensor.readTempC(), 2);
    Serial.println();
}

#ifdef I2C_2_SDA_PIN
void scan_all(){
    digitalWrite(I2C_3_POWER, HIGH);
    delay(100);
    Serial.begin(115200);
    pixel.begin();
    pixel.setBrightness(10);

    Wire.begin(I2C_SDA_PIN, I2C_SCL_PIN);
    i2c_scan();
    delay(100);
    Wire.begin(I2C_2_SDA_PIN, I2C_2_SCL_PIN);
    i2c_scan();

    delay(100);
    Wire.begin(I2C_3_SDA_PIN, I2C_3_SCL_PIN);
    i2c_scan();
}
#endif

void setup()
{
    Serial.begin(115200,SERIAL_8N1, UART_RX_PIN, UART_TX_PIN);
    pixel.begin();
    pixel.setBrightness(10);
    Wire.begin(I2C_2_SDA_PIN, I2C_2_SCL_PIN);
    //init_bme280();
}

void loop()
{
    static int count = 0;
    Serial.println("loop "+String(count++));
    //read_bme_280();
    i2c_scan();
    Serial.println();
    delay(1000);
}
