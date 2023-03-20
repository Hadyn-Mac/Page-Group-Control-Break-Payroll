#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ProcessDept(FILE *in_file, char *prevDept, int *pageCount, int *lineCount, FILE *out_file, float *pageGrossTotal, float *pageFicaTotal, float *pageNetTotal, float *grossTotal, float *ficaTotal, float *netTotal, float *deptGrossTotal, float *deptFicaTotal, float *deptNetTotal);

void printTrailor(float grossTotal, float netTotal, float ficaTotal,int lineCount,int *pageCount, FILE *out_file);

//void ProcessRecord();

int main() {
   
   char fileName[25] = "Lab2Data.txt";
   char fileOutName[25] = "Lab2Output.txt";
   char prevDept[6] = "start";
   
   float pageGrossTotal = 0.00;
   float pageFicaTotal = 0.00;
   float pageNetTotal = 0.00;
   
   float deptGrossTotal = 0.00;
   float deptFicaTotal = 0.00;
   float deptNetTotal = 0.00;
   
   float grossTotal = 0.00;
   float ficaTotal = 0.00;
   float netTotal = 0.00;
   
   int pageCount = 0;
   int lineCount = 0;
   FILE *in_file = fopen( fileName , "r");
   FILE *out_file = fopen(fileOutName, "w");
   
   while(!feof(in_file))
   {
	   ProcessDept(in_file, prevDept, &pageCount, &lineCount, out_file, &pageGrossTotal, &pageFicaTotal, &pageNetTotal, &grossTotal, &ficaTotal, &netTotal, &deptGrossTotal, &deptFicaTotal, &deptNetTotal);
   }
   printTrailor(grossTotal,netTotal,ficaTotal, lineCount,&pageCount, out_file);
   fclose(in_file);
   fclose(out_file);
   return 0;
}
