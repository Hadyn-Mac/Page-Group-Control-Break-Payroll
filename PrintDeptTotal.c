#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printDeptTotal(float *deptGrossTotal, float *deptFicaTotal, float *deptNetTotal, FILE *out_file)
{
	fprintf(out_file,"\t\tDepartment Totals\t\t\t\t");
	fprintf(out_file,"\t%10.2f", *deptGrossTotal);
   	fprintf(out_file, "\t$%10.2f", *deptFicaTotal);
   	fprintf(out_file, "\t%10.2f\n\n", *deptNetTotal);
   	
   	*deptGrossTotal = 0;
   	*deptFicaTotal = 0;
   	*deptNetTotal = 0;
}
