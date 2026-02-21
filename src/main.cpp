#include <Arduino.h>
#include <Servo.h>

/**
 * @file main.cpp
 * @brief Simple servo sweep demonstration for MG995 closed-loop axis control system.
 * @author ansh-codr
 * @date 2026-02-21
 */

Servo myServo;

void setup() {
    Serial.begin(9600);
    myServo.attach(11);
    Serial.println("Servo initiate");
}

void loop() {

    for (int i = 0; i <= 180; i += 10) {
        myServo.write(i);

        Serial.print("Servo Angle: ");
        Serial.println(i);

        delay(500);
    }

    for (int i = 180; i >= 0; i -= 10) {
        myServo.write(i);

        Serial.print("Servo Angle: ");
        Serial.println(i);

        delay(500);
    }
}