#include <Arduino.h>

int melody = 200;
const int buzzer = 7;
int fkng[]={262,263};

void setup(){
 pinMode(buzzer,OUTPUT);
}

void loop(){
  for(int i=0; i<2; i++){
    tone(buzzer,fkng[i]);
    delay(1000);
  }
}

