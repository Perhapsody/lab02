#define weather_h 

#include <stdbool.h>

#include "array_helpers.h"

int hist_min_temp(int a[YEARS][MONTHS][DAYS][PHYS_QTTYS]); 
void yearly_max_tmp(int a[YEARS][MONTHS][DAYS][PHYS_QTTYS], int output[YEARS]);
void max_precipitate(int a[YEARS][MONTHS][DAYS][PHYS_QTTYS], int output[YEARS]);
