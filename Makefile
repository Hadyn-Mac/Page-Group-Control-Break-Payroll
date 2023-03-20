#makeFile
Lab2: Lab2.o PGM2.o ProcessDept.o ProcessRecord.o FICA.o GrossCalc.o PrintHeading.o PrintDeptTotal.o PrintPageTotal.o PrintRecord.o PrintTrailor.o
	gcc -o Lab2 Lab2.o PGM2.o ProcessDept.o ProcessRecord.o FICA.o GrossCalc.o PrintHeading.o PrintDeptTotal.o PrintPageTotal.o PrintRecord.o PrintTrailor.o
	
Lab2.o: Lab2.c
	gcc -c -o Lab2.o Lab2.c

PGM2.o: PGM2.c
	gcc -c -o PGM2.o PGM2.c
	
ProcessDept.o: ProcessDept.c
	gcc -c -o ProcessDept.o ProcessDept.c

ProcessRecord.o: ProcessRecord.c
	gcc -c -o ProcessRecord.o ProcessRecord.c

FICA.o: FICA.c
	gcc -c -o FICA.o FICA.c
	
GrossCalc.o: GrossCalc.c
	gcc -c -o GrossCalc.o GrossCalc.c

PrintHeading.o: PrintHeading.c
	gcc -c -o PrintHeading.o PrintHeading.c
	
PrintDeptTotal.o: PrintDeptTotal.c
	gcc -c -o PrintDeptTotal.o PrintDeptTotal.c
	
PrintPageTotal.o: PrintPageTotal.c
	gcc -c -o PrintPageTotal.o PrintPageTotal.c
	
PrintRecord.o: PrintRecord.c
	gcc -c -o PrintRecord.o PrintRecord.c
	
PrintTrailor.o: PrintTrailor.c
	gcc -c -o PrintTrailor.o PrintTrailor.c
	
clean:
	rm *.o Lab2


