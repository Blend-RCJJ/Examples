#include <Arduino.h>

const int BUZZER = 7;
const int shi0 = 247;
const int Do = 262;
const int Do_ = 277;
const int re = 294;
const int re_ = 311;
const int mi = 330;
const int fa = 349;
const int fa_ =370;
const int so = 392;
const int so_ = 415;
const int ra = 440;
const int ra_ = 466;
const int shi = 494; 
const int Do1 = 523;
const int Do_1 = 554;
const int re1 = 587;
const int re_1 = 622;
const int mi1 = 659;
const int fa1 = 698;
const int fa_1 = 740;
const int so1 = 784;
const int so_1 = 831;
const int ra1 = 880;
const int ra_1 = 932;
const int shi1 = 988;

void setup() {
  pinMode(BUZZER,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  tone(BUZZER,shi0);
  delay(250);
  tone(BUZZER,Do_);
  delay(250);
  tone(BUZZER,re);
  delay(250);
  tone(BUZZER,mi);
  delay(250);
  tone(BUZZER,fa_);
  delay(750);
  tone(BUZZER,re);
  delay(1000);
  noTone(BUZZER);
  delay(100);
  tone(BUZZER,re);
  delay(150);
  tone(BUZZER,mi);
  delay(150);
  tone(BUZZER,fa);
  delay(400);
  tone(BUZZER,mi);
  delay(250);
  tone(BUZZER,re);
  delay(250);
  tone(BUZZER,Do_);
  delay(300);
  tone(BUZZER,re);
  delay(300);
  tone(BUZZER,mi);
  delay(250);
  tone(BUZZER,fa_);
  delay(750);
  tone(BUZZER,shi);
  delay(900);
  noTone(BUZZER);
  delay(50);
  tone(BUZZER,shi0);
  delay(250);
  tone(BUZZER,Do_);
  delay(250);
  tone(BUZZER,re);
  delay(300);
  tone(BUZZER,mi);
  delay(300);
  tone(BUZZER,re);
  delay(250);
  tone(BUZZER,Do_);
  delay(400);
  tone(BUZZER,ra);
  delay(300);
  tone(BUZZER,so);
  delay(250);
  tone(BUZZER,fa_);
  delay(500);
  noTone(BUZZER);
  delay(250);
  tone(BUZZER,re);
  delay(750);
  noTone(BUZZER);
  delay(200);
  tone(BUZZER,re);
  delay(250);
  tone(BUZZER,mi);
  delay(250);
  tone(BUZZER,fa);
  delay(300);
  tone(BUZZER,mi);
  delay(300);
  tone(BUZZER,re);
  delay(250);
  tone(BUZZER,Do_);
  delay(300);
  tone(BUZZER,re);
  delay(300);
  tone(BUZZER,mi);
  delay(250);
  tone(BUZZER,fa_);
  delay(500);
  noTone(BUZZER);
  delay(250);
  tone(BUZZER,shi);
  delay(600);
  noTone(BUZZER);
  delay(250);
  tone(BUZZER,shi);
  delay(300);
  tone(BUZZER,Do_1);
  delay(300);
  tone(BUZZER,re1);
  delay(300);
  tone(BUZZER,so);
  delay(250);
  tone(BUZZER,fa_);
  delay(250);
  tone(BUZZER,fa);
  delay(300);
  tone(BUZZER,re1);
  delay(300);
  tone(BUZZER,ra_);
  delay(250);
  tone(BUZZER,shi);
  delay(2000);
  noTone(BUZZER);
  delay(5000);

}