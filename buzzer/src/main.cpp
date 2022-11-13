#include <Arduino.h>

const int buzzer = 7;

void setup() {
  pinMode(buzzer,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(buzzer,(millis()/10%2));

  // put your main code here, to run repeatedly:
}