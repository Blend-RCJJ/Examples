#include <Arduino.h>

const int LED = 9;
int count     = 0;

void setup() {
    pinMode(LED, OUTPUT);
}

void loop() {
    analogWrite(LED, 127*sin(count/50.0)+127); //sin(count)=-1の時LEDの明るさが0
    delay(10); //変化を見るための待機
    count++;
}