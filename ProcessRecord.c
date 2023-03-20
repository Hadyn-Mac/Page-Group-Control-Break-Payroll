#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float getGross(float payRate, float hours);
float getFica(float gross, float YTD);
void ProcessRecord(float YTD, float payRate, float hours, float *gross, float *fica, float *net)
{
	*gross = getGross(payRate, hours);
	*fica = getFica(*gross, YTD);
	*net = *gross - *fica;
	
	
		
}
