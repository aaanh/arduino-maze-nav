#include <Wire.h>

// define trig and echo pin #'s
int trigPin = 4;
int echoPin = 3;

int duration;
int distance;

void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    Serial.begin(9600);
}

void loop() {
    // Sequence for sensor
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    // Trigger
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
}
