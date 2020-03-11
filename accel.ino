// This source code is forked and modified from Instructables project on Interfacing with ADXL335 Accelerometer and Arduino by apoorveinstein
// Source code original >> https://www.instructables.com/id/Interfacing-ADXL335-with-ARDUINO/

// May contain some pseudocodes

// MIT License


#include <Arduino.h>
#include <stdlib.h>

//connect 3.3v to AREF

const int ap1 = A5;
const int ap2 = A4;
const int ap3 = A3;

int sv1 = 0;
int ov1 = 0;
int sv2 = 0;
int ov2 = 0;
int sv3 = 0;
int ov3 = 0;
const int change_rate_threshold = 200; // This is the threshold for powering the taser module

void setup()
{
    // initialize serial communications at 9600 bps:
    Serial.begin(9600);
    int chang_rate(before, after) {
        int change = 0;
        change = abs(after - before);
        return change
    }
}

void loop()
{
    analogReference(EXTERNAL); //connect 3.3v to AREF
    // read the analog in value:
    sv1_before = analogRead(ap1);
    // map it to the range of the analog out:
    ov1 = map(sv1, 0, 1023, 0, 255);
    // change the analog out value:
    delay(2);
    //
    sv2_before = analogRead(ap2);
    ov2 = map(sv2, 0, 1023, 0, 255);
    //
    delay(2);
    //
    sv3_before = analogRead(ap3);

    ov3 = map(sv3, 0, 1023, 0, 255);
    delay(1)
    sv1_after = analogRead(ap1);
    sv2_after = analogRead(ap2);
    sv3_after = analogRead(ap3);
    delay(1)
    // Calculating the change and outputting the power to the taser module
    if (change_rate(sv1_before, sv1_after) >= change_rate_threshold || change_rate(sv2_before, sv2_after) >= change_rate_threshold || change_rate(sv3_before, sv3_after) >= change_rate_threshold) {
        // activate taser module (push power to module)
        
        delay(10000);
    }
    delay(1000);
}