#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printHeading(FILE *out_file, int *pageCount);
void printRecord(int empID, char *surname, char *given, char *dept, float YTD, float gross, float fica, float net, FILE *out_file, int *lineCount);

void PGM2(int empID, char *surname, char *given, char *dept, float YTD, float gross, float fica, float net, FILE *out_file,int *lineCount, int *pageCount)
{
	 
	if((*lineCount % 4) == 0)
	{
		printHeading(out_file, &*pageCount);
	}
	
	
	printRecord(empID, surname, given, dept, YTD, gross, fica, net, out_file, &*lineCount);
	
	
	
	
}
