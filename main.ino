// Libraries
#include <Arduino.h> // main library header for arduino boards
#include "DCMDriverL298.h" // dual H-bridge motor driver
#include <Wire.h>

// Pin definitions
// Just blantantly copied from auto-generated code in /Firmware
#define DCMOTORDRIVERL298_PIN_INT1	2
#define DCMOTORDRIVERL298_PIN_ENB	6
#define DCMOTORDRIVERL298_PIN_INT2	3
#define DCMOTORDRIVERL298_PIN_ENA	5
#define DCMOTORDRIVERL298_PIN_INT3	4
#define DCMOTORDRIVERL298_PIN_INT4	7
#define HCSR04_1_PIN_TRIG	9
#define HCSR04_1_PIN_ECHO	8
#define HCSR04_2_PIN_TRIG	11
#define HCSR04_2_PIN_ECHO	10

// Global vars and defs

// Object init

/*
Developer's explanations:
- Creating new objects with existing class attributes in imported libraries.
- Mostly DC motor driver var inits.
*/

DCMDriverL298 dcMotorDriverL298(DCMOTORDRIVERL298_PIN_ENA,DCMOTORDRIVERL298_PIN_INT1,DCMOTORDRIVERL298_PIN_INT2,DCMOTORDRIVERL298_PIN_ENB,DCMOTORDRIVERL298_PIN_INT3,DCMOTORDRIVERL298_PIN_INT4);

// Setup
void setup() {

    // General debugging
    Serial.begin(9600);
    while (!Serial);
    Serial.println("start");
    menuOption = menu();

    //
}

void loop() {

}