#include <Arduino.h>

HardwareSerial mySerial(PA10,PA9);

void setup() {
    Serial.begin(9600);

    mySerial.setRx(PA10);
    mySerial.setTx(PA9);
    mySerial.begin(9600);
}

void loop() {
    Serial.println("Hello World");
    mySerial.println("Hello World");
}