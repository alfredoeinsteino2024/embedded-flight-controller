#include <Arduino.h>
#include"Config.h"
#include"SensorSim.h"

    void setup() {
        Serial.begin(115200);
    }
    void loop(){
        updateSimulation();
        
        float targetAngle = 10.0f; // Example target angle
        float measuredAngle = getAngle();
        float error = targetAngle - measuredAngle;

        Serial.print("Measured Angle: ");
        Serial.println(measuredAngle);
        Serial.print("Error: ");
        Serial.println(error);
    }