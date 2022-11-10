#include <Arduino.h>

#include "./SCServo/SCServo.h"

SMS_STS st;

HardwareSerial mySerial(PA10, PA9);

void setup() {
    mySerial.setRx(PA10);
    mySerial.setTx(PA9);
    mySerial.begin(1000000);
    st.pSerial = &mySerial;
    delay(1000);
    st.unLockEprom(1);
    st.WheelMode(1);  //恒速模式
    st.EnableTorque(1, 0);
    st.LockEprom(1);
}

void loop() {
    st.WriteSpe(1, 8000,255);
    delay(2000);
    st.WriteSpe(1, -8000,255);
    delay(2000);
}