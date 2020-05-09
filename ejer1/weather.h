#define weather_h 

#include <stdbool.h>

#include "array_helpers.h"

int hist_min_temp(int a[YEARS][MONTHS][DAYS][PHYS_QTTYS]); 
void max_temperature_anual(int a[YEARS][MONTHS][DAYS][PHYS_QTTYS], int output[YEARS]);
void max_precip_mensual(int a[YEARS][MONTHS][DAYS][PHYS_QTTYS], int output[YEARS]);
