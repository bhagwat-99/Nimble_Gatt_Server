#ifndef _ENV_DATA_H_
#define _ENV_DATA_H_

/* Includes */
/* ESP APIs */
#include "esp_random.h"

/* Defines */
#define ENV_DATA_TASK_PERIOD (2000 / portTICK_PERIOD_MS)

/* Public function declarations */
float get_temperature_value(void);
float get_humidity_value(void);

void update_env_data(void);

#endif // _ENV_DATA_H_