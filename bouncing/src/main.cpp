//ボタンを押すとLEDが点灯し続ける。かつ明るさが変化する。

#include <Arduino.h>

const int LED    = 9;
const int BUTTON = 7;

int count      = 0;
int val        = 0;
int old_val    = 0;
int state      = 0;
int brightness = 128;

unsigned long startTime = 0;  // unsigned long =
                              // 符号なしのでかい数を格納できる。

void setup() {
    pinMode(LED, OUTPUT);
    pinMode(BUTTON, INPUT);
}

void loop() {
    val = digitalRead(BUTTON);
    if ((val == HIGH) && (old_val == LOW)) {
        state     = 1 - state;
        startTime = millis();  //本体のタイマー

        delay(10);
    }

    if ((val == HIGH) && (old_val == HIGH)) {
        if (state == 1 && (millis() - startTime) > 500) {
            brightness++;
            delay(10);
            if (brightness > 255) {
                brightness = 0;
            }
        }
    }
    old_val = val;

    if (state == 1) {
        analogWrite(LED, brightness);  // sin(count)=-1の時LEDの明るさが0
    } else {
        analogWrite(LED, 0);//TODO明るさ変わらないから直す。sin用いたい。
    }
}
