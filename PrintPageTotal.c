#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printPageTotal(float *pageGrossTotal, float *pageFicaTotal, float *pageNetTotal,int *pageCount, FILE *out_file)
{
	fprintf(out_file,"\n\nPage Totals\t\t\t\t\t\t\t");
	fprintf(out_file,"\t%10.2f", *pageGrossTotal);
   	fprintf(out_file, "\t$%10.2f", *pageFicaTotal);
   	fprintf(out_file, "\t%10.2f\n\n", *pageNetTotal);
   	fprintf(out_file, "\t\t\t\t\t\t\t\t\t\t\t\t\tPage %d\n", *pageCount);
   	fprintf(out_file, "___________________________________________________________________________________________________________________\n");
   	*pageGrossTotal = 0;
   	*pageFicaTotal = 0;
   	*pageNetTotal = 0;
}
