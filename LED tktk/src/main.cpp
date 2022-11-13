#include <Arduino.h>

unsigned int counter = 0;

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  delay(100);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(LED_BUILTIN,HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN,LOW);
  delay(500);

counter++;
  // put your main code here, to run repeatedly:
}