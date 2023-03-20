#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printRecord(int empID, char *surname, char *given, char *dept, float YTD, float gross, float fica, float net, FILE *out_file, int *lineCount)
{
	
	fprintf(out_file, "%d", empID);
	fprintf(out_file, "\t\t%-10s", given);
   	fprintf(out_file, "\t%-10s", surname);
   	fprintf(out_file, "\t%-6s", dept);
   	fprintf(out_file, "\t%10.2f", YTD);
   	fprintf(out_file, "\t%10.2f", gross);
   	fprintf(out_file, "\t$%10.2f", fica);
   	fprintf(out_file, "\t%10.2f\n", net);
   	++*lineCount;
	
}
