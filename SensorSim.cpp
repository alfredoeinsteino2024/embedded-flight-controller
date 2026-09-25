#include <Arduino.h>
#include "SensorSim.h"
#include<cstdint>

float actualAngle = 0.0f;
int direction =  1;
float getAngle(){  
   return actualAngle;  
} 

 void updateSimulation(){
    static uint32_t previousTime = 0;
    uint32_t currentTime = millis();
    const uint32_t interval = 1000; // 1 second interval
    
    if(currentTime - previousTime >= interval){
        if(actualAngle >= 7.0f){
            direction = -1;
        } 
        else if(actualAngle <= 0.0f){
            direction = 1;
        }
        if(direction ==1){
            actualAngle +=1.0f;
        }
        else{
            actualAngle -=1.0f;
            previousTime = currentTime;
        }
    }
 }