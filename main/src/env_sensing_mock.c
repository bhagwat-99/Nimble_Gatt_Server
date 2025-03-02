/*
@author : Bhagwat Shinde
@date   : 02 Mar 2025
*/

#include "common.h"
#include "env_data.h"

/* Private variables*/
static float temperature    =   26.5f;
static float humidity       =   88.5f;

/* Public Function */
float get_temperature_value(void){

    return temperature;
}

float get_humidity_value(void){

    return humidity;
}

void update_env_data(void){
    
    temperature = temperature + 1.5f;
    humidity = humidity + 1.5f;
}

