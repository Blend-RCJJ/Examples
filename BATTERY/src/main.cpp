#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

const int LED_PINS = 6;
const int numberOfLED = 24;

Adafruit_NeoPixel led(numberOfLED,LED_PINS,NEO_GRB + NEO_KHZ800);

void battery(int voltage){
  led.begin();
  led.setBrightness(50);
  for (int i = 0; i < 24; i++)
  {
    led.setPixelColor(i,0,0,0);
  }

  for (int i = 0; i <= voltage; i++)
  {
    /* code */
    
  
  if(i <=10){
    led.setPixelColor(0,255,0,0);
    led.setPixelColor(1,255,0,0);
  
  }else if(i <=20){
    led.setPixelColor(2,200,55,0);
    led.setPixelColor(3,200,55,0);

  }else if(i <=30){
    led.setPixelColor(4,190,65,0);
    led.setPixelColor(5,180,75,0);
    led.setPixelColor(6,180,75,0);
   
  }else if(i <=40){
    led.setPixelColor(7,170,85,0);
    led.setPixelColor(8,160,95,0);
    led.setPixelColor(9,160,95,0);
 
  }else if(i <=50){
    led.setPixelColor(10,140,115,0);
    led.setPixelColor(11,120,125,0);
    led.setPixelColor(12,120,125,0);
    
  }else if(i <=60){
    led.setPixelColor(13,100,120,35);
    led.setPixelColor(14,90,110,55);
    
  }else if(i <=70){
    led.setPixelColor(15,80,100,75);
    led.setPixelColor(16,70,90,95);
    
  }else if(i <=80){
    led.setPixelColor(17,60,80,115);
    led.setPixelColor(18,50,70,135);
    
  }else if(i <=90){
    led.setPixelColor(19,40,60,155);
    led.setPixelColor(20,30,50,175);
    
  }else if(i <=99){
    led.setPixelColor(21,20,40,195);
    led.setPixelColor(22,10,35,210);
   
  }else if(i <=1000){
    led.setPixelColor(23,0,0,255);

  }
  }
      
    led.show();
}

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  for (int i = 0; i <= 100; i++)
  {
    battery(i);
    delay(200);
  }
  
  // put your main code here, to run repeatedly:
}