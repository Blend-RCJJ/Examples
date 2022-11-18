#include <Arduino.h>

const int LED =13;
int val = 0;
void setup() {
  pinMode(LED,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  val = analogRead(0);

  digitalWrite(13,HIGH);
  delay(val);

  digitalWrite(13,LOW);
  delay(val);
  // put your main code here, to run repeatedly:
}