/*
@author : Bhagwat Shinde
@date   : 02 Mar 2025
*/

#include "common.h"
#include "env_data.h"

/* Private variables*/
static float temperature    =   26.5;
static float humidity       =   88.5;

/* Public Function */
uint16_t get_temperature_value(void){

    return (uint16_t)temperature;
}

uint16_t get_humidity_value(void){

    return (uint16_t)humidity;
}

void update_env_data(void){

    temperature = 25 + (uint8_t)(esp_random() % 15);
    humidity = 70 + (uint8_t)(esp_random() % 15);
}

