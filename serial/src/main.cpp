#include <Arduino.h>

int val = 0;

void setup(){
  Serial.begin(9600);
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(PC13,INPUT);
}

void loop(){
  val = digitalRead(PC13);

  if(val == HIGH){
    digitalWrite(LED_BUILTIN,LOW);
    Serial.println("LED消えてるなう");
  }else{
    digitalWrite(LED_BUILTIN,HIGH);
    Serial.println("LED点いてるなう");
  }
  
 //Serial.println(millis()/1000%2); delayを使わずに1秒待機が可能になる
}
