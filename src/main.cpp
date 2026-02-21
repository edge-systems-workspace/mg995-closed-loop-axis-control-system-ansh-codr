#include <Arduino.h>
#include <Servo.h>

/**
 * @file main.cpp
 * @brief Simple servo sweep demonstration
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
}