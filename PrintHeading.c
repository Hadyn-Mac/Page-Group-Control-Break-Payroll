#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printHeading(FILE *out_file, int *pageCount)
{
	if(*pageCount == 0)
	{
		fprintf(out_file, "\t\t\t\t\t\tACME Sports Inc.\n");
		fprintf(out_file, "\t\t\t\tPython is super cool, even cooler than Ada and C!\n");
		fprintf(out_file, "___________________________________________________________________________________________________________________\n");
	}
	
	fprintf(out_file, "\t\t\t\t\t\tACME\n");
	fprintf(out_file, "Emp. No.\tName\t\t\t\tDept.\tYTD($)\t\tGross($)\tFICA TAX\t\tNet\n");
	
	++*pageCount;
}
