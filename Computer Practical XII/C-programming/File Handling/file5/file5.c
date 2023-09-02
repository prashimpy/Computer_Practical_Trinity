//WAP to store employee’s name, designation and salary in a data file “employee.txt” using fwrite(). 
//The computer stores data until you say ‘n’. 
//Then read the contents of that file and print on screen using fread().

#include<stdio.h>
#include<string.h>
#include<conio.h>

struct employee {
	char n[100];
	char d[100];
	int s;
	
}e;

int main(){
	
	printf("Author: \t Prashim Timsina. \n");
	printf("Program: \t Use fwrite() and fread().\n\n");
	
	FILE *p;
	char v;
	
	p = fopen("file5.txt","w");
	
	printf("-----------------------\n");
	printf("Enter data in file.... \n");
	printf("-----------------------\n");
	do{
		printf("\n");
		
		printf("Enter Employee Name: ");
		scanf("%s",e.n);
		
		printf("Enter Employee Designation: ");
		scanf("%s",e.d);
		
		printf("Enter Employee Salary: ");
		scanf("%d",&e.s);
		
		fwrite(&e, sizeof(struct employee), 1, p);
		
		printf("\nDo you want to continue?(y/n): ");
		v = getche();
		printf("\n");
		
	}while(v != 'n');
	
	fclose(p);
	
	p = fopen("file5.txt","r");
	
	printf("\n---------------------------");
	printf("\nThe Outputted data is.... \n");
	printf("---------------------------\n");
	
	while(fread(&e, sizeof(struct employee),1, p)){
		printf("\nName: %s",e.n);
		printf("\nDesignation: %s",e.d);
		printf("\nName: %d",e.s);
		printf("\n");
	}
	fclose(p);
	return 0;
	
}
