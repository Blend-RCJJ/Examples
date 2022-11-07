#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

const int pin = 6;       //ピン番号
const int numOfLED = 8;  // LEDの数

Adafruit_NeoPixel led(numOfLED, pin,
                      NEO_GRB + NEO_KHZ800);  // LED(numOfLED)個を6番ピンに設定

void setup(void) {
    //何もしなくていい
}

void loop(void) {
    led.begin();  // 始まりの合図

    led.setBrightness(50);                      //明るさの定義
    led.setPixelColor(0 /*0番目*/, 255, 100, 0);  // 1番目のLEDを赤色に
    led.setPixelColor(1/*0番目*/, 255, 0, 255);  // 1番目のLEDを赤色に

    led.show();  // LEDに反映させる
}