#include <Arduino.h>

const int BUTTON = 7;
int val = 0;

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(BUTTON,INPUT);
  // put your setup code here, to run once:
}

void loop() {
val = digitalRead(BUTTON);

if(val == HIGH){
  digitalWrite(LED_BUILTIN,HIGH);
}else{
  digitalWrite(LED_BUILTIN,LOW);
}
  // put your main code here, to run repeatedly:
}