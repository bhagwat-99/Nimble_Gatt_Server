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

    temperature = 25.39 + (float)(esp_random() % 9);
    humidity = 70.54 + (float)(esp_random() % 14);
}

