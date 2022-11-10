
#include <Arduino.h>

const int LED = 13;//LEDはデジタルピン13に接続

void setup() {
    pinMode(LED, OUTPUT);
    //一度だけ行う動作
}

void loop() {
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
}