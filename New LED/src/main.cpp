#include <Adafruit_NeoPixel.h>
#include <Arduino.h>

const int pin      = 6;   //ピン番号
const int numOfLED = 24;  // LEDの数

Adafruit_NeoPixel led(numOfLED, pin,
                      NEO_GRB + NEO_KHZ800);  // LED(numOfLED)個を6番ピンに設定

void setup(void) {
    //何もしなくていい
}

void loop(void) {
    led.begin();  // 始まりの合図

    led.setBrightness(50);  //明るさの定義

    for (int i = 0; i < numOfLED; i++) {
        if (i % 3 == 0) {
            
            led.show();
            led.setPixelColor(i, 0, 0, 0);
            delay(10);

        } else if (i % 3 == 1) {
           
            led.show();
            led.setPixelColor(i, 0, 0, 0);
            delay(20);

        } else {
            
            led.show();
            led.setPixelColor(i, 0, 0, 0);
            delay(30);
        }
    }

    for (int i = 0; i < numOfLED; i++) {
        if (i % 3 == 0) {
            delay(100);
            led.setPixelColor(i, 255, 0, 0);
            led.show();
        } else if (i % 3 == 1) {
            delay(150);
            led.setPixelColor(i, 0, 255, 0);
            led.show();
        } else {
            delay(200);
            led.setPixelColor(i, 100, 100, 100);
            led.show();
        }
    }

    led.show();  // LEDに反映させる
}

//(red,green,blue)