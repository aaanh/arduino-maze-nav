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
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
}

void loop() {
    // Sequence for sensor
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    // Trigger
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // DnD
    duration = pulseIn(echoPin, HIGH);
    distance = duration*0.034/2;
    //Serial.println("Duration: ");
    //Serial.println(duration );
    delay(100);
    //Serial.println("Distance: ");
    Serial.println(distance);
    // RGB
    if (distance <= 10){
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
    }
    else if (distance < 30){
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
    }
    else if (distance <60 ){
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
    }
}
