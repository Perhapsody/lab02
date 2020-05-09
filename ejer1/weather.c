#include <stdbool.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "weather.h"
#include "array_helpers.h"

int hist_min_temp(int a[YEARS][MONTHS][DAYS][PHYS_QTTYS]) {
	int min_tmp;
	min_tmp = a[0][january][FST_DAY][temp_m];
	for(unsigned int year = 0; year < YEARS; year++) {
		for(t_month month = 0; month < MONTHS ; month++ ) {
			for(unsigned int day = 0; day < DAYS; day++) {
					if(min_tmp >= a[year][month][day][temp_m]){
					min_tmp = a[year][month][day][temp_m];
					}
				}
			}
		}
		return min_tmp;
	}
void yearly_max_tmp(int a[YEARS][MONTHS][DAYS][PHYS_QTTYS], int output[]) {
	int local_max;
	local_max = a[0][january][FST_DAY][temp_M];
		for(unsigned int year = 0; year < YEARS; year++) {
			for(t_month month = 0; month < MONTHS ; month++ ) {
				for(unsigned int day = 0; day < DAYS; day++) {
					if(local_max < a[year][month][day][temp_M]){
						local_max = temp_M;
						
							}
				}
			}
	output[year] = local_max;
    printf("el registro de mayor temperatura del año %u es %d \n", year +1980, output[year]); 
	}
}

void max_precipitate(int a[YEARS][MONTHS][DAYS][PHYS_QTTYS], int output[YEARS]) {
	
	
	
	}
