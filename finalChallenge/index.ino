// Product specifications and ratings:
/*
    Components (NEED TO WEIGH EVERYTHING!!):
        - 2*wheels
        - 1*ball-berring
        - 1*breadboard
        - 1*arduino uno:
            - v_max: 12 V
            - flash mem: 32kb (.5kb of which is used for bootloader)
            - SRAM: 2kb (does not bode well with long strings)
        - 2*ultrasonic sensor
        - 1*battery bracket
        - 2x4 AA batteries:
            + Capacity/cell: 2k-3k mAh
            + Voltage/cell: 1.2-1.5 V
            + Total capacity: 4k-6k mAh
            + Total voltage output: ~13 V
        - (probably) 1*servo
        - 2*motors:
            + V per unit: 1.5~4.5 V (V_total_max = ~9V)
            + Consumption: 70 mA (total: ~140 mA)
            + RPM no loads: ~23,000
        - 1 RGB LED

*/

// import libraries and headers
#include <Wire.h>
#include <Servo.h>

// unused ports for future references:
/*
    digital ports: 13, 12, 10
*/

// motor-related vars
    // scheme: motor_driver = pin_number
int motorA1 = 5;
int motorA2 = 6;
int motorB1 = 9;
int motorB2 = 11;

// sensor-related vars;
int front_echo = 8;
int front_trig = 7;

int side_echo = 4;
int side_trig = 2;

// LED-related vars;
int r = ;
int g = ;
int b = ;

// servo-related vars
int servo_pwm = 3;
int servo_pos = 0;
Servo servo_9;
servo_9.attach(servo_pwm);

// functions for clean and yeet codes
float Distance() {
    distance = pulseIn(front_echo, HIGH)*0.034/2;
    Serial.println("Distance: %.2f", distance);
    return distance;
}

// setups
void setup() {
    pinMode(motorA1, OUTPUT);
    pinMode(motorA2, OUTPUT);
    pinMode(motorB1, OUTPUT);
    pinMode(motorB2, OUTPUT);
}

void loop() {
    // distance calculations and LED adjustments
    distance = Distance();
    if (distance <= 10) {
        digitalWrite
    }
}

// demo codes -----------
// motor looping forward

// digitalWrite(motorA1, HIGH);
// digitalWrite(motorB2, HIGH);
// delay(20);

// digitalWrite(motorA1, LOW);
// digitalWrite(motorB2, LOW);
// delay(20);

// ----------------------
