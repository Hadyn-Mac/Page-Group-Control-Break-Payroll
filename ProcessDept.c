#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ProcessRecord(float YTD, float payRate, float hours, float *gross, float *fica, float *net);

void PGM2(int empID, char *surname, char *given, char *dept, float YTD, float gross, float fica, float net, FILE *out_file,int *lineCount,int *pageCount);

void printPageTotal(float *pageGrossTotal, float *pageFicaTotal, float *pageNetTotal, int *pageCount, FILE *out_file);

void printDeptTotal(float *deptGrossTotal, float *deptFicaTotal, float *deptNetTotal, FILE *out_file);

void ProcessDept(FILE *in_file, char *prevDept, int *pageCount, int *lineCount, FILE *out_file, float *pageGrossTotal, float *pageFicaTotal, float *pageNetTotal, float *grossTotal, float *ficaTotal, float *netTotal, float *deptGrossTotal, float *deptFicaTotal, float *deptNetTotal)
{
   
  
   float gross = 0.00;
   float fica = 0.00;
   float net = 0.00;
   
   
   
   int empID;
   char surname[16];
   char given[16];
   char dept[6] = "start";
   float YTD;
   float payRate;
   float hours;
   
   
   while(strcmp(prevDept,dept) == 0 && !feof(in_file))
   {
   	
   	
	
	   	
   	fscanf(in_file, "%d", &empID);
	fscanf(in_file,"%16s",surname);
   	fscanf(in_file,"%16s",given);
   	fscanf(in_file,"%5s",dept);
   	fscanf(in_file, "%f", &YTD);
   	fscanf(in_file, "%f", &payRate);
   	fscanf(in_file, "%f", &hours);
	   	
	   	
  	
   	
   	if(strcmp(prevDept, dept) !=0 && *lineCount != 0)
   	{
   		printDeptTotal(&*deptGrossTotal, &*deptFicaTotal, &*deptNetTotal, out_file);
   	}
   	
   	if((*lineCount % 4) == 0 && *lineCount != 0)
	{
	   	printPageTotal(&*pageGrossTotal, &*pageFicaTotal, &*pageNetTotal, &*pageCount, out_file);
   	}
   	
	   
   	ProcessRecord(YTD, payRate, hours, &gross, &fica, &net);
	  	
  	*deptGrossTotal += gross;
  	*deptFicaTotal += fica;
  	*deptNetTotal += net;
	  	
  	*pageGrossTotal += gross;
  	*pageFicaTotal += fica;
  	*pageNetTotal += net;
	  	
  	*grossTotal += gross;
  	*ficaTotal += fica;
  	*netTotal += net;
	   	
   	PGM2(empID, surname, given, dept, YTD, gross, fica, net, out_file, &*lineCount, &*pageCount);
   	strcpy(prevDept, dept);
   	
   }
   strcpy(prevDept,"start");
   if(feof(in_file))
   {
   	printDeptTotal(&*deptGrossTotal, &*deptFicaTotal, &*deptNetTotal, out_file);
   	printPageTotal(&*pageGrossTotal, &*pageFicaTotal, &*pageNetTotal, &*pageCount, out_file);
   }
   
   
}
