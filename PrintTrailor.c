#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printTrailor(float grossTotal, float netTotal, float ficaTotal,int lineCount,int *pageCount, FILE *out_file)
{
	fprintf(out_file, "\t\t\t\t\t\tReport Summary\n");
	fprintf(out_file, "Records processed: %d\n", lineCount);
	fprintf(out_file,"Total Gross:\t%10.2f\n", grossTotal);
	fprintf(out_file,"Total Net:\t%10.2f\n", netTotal);
	fprintf(out_file,"Total FICA:\t%10.2f\n\n", ficaTotal);
	
	++*pageCount;
	
	fprintf(out_file, "\t\t\t\t\t\t\t\t\t\t\t\t\tPage %d\n", *pageCount);
	fprintf(out_file, "___________________________________________________________________________________________________________________\n");
}
