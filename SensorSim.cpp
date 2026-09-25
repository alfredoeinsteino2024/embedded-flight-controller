#include <Arduino.h>
#include "SensorSim.h"
#include<cstdint>

float actualAngle = 0.0f;

float getAngle(){
   
    return actualAngle;  
} 
 void updateSimulation(){
    static uint32_t previousTime = 0;
    uint32_t currentTime = millis();
    uint32_t interval = 1000; // 1 second interval

    if(currentTime - previousTime >= interval){
        actualAngle = 7.0f;
        previousTime = currentTime;
    }
 }