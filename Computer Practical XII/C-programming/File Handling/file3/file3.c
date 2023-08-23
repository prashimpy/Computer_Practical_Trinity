//WAP to store student’s name and address in a data file “student.txt”. Use fprintf() function.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	
	printf("Author: \t Prashim Timsina. \n");
	printf("Program: \t Store and print name and address usng fprintf().\n\n");
	
	FILE *p;
	char n[100], a[100];
	
	p = fopen("file3.txt","w");
	
	printf("Enter Student's Name: ");
	scanf("%s",n);
	printf("Enter Student's Address: ");
	scanf("%s",a);
	printf("\n");
	
	fprintf(p,"%s ",n);
	fprintf(p,"%s",a);
	
	fclose(p);
	
	printf("Printing Data...\n\n");
	p = fopen("file3.txt","r");
	fscanf(p,"%s",n);
	fscanf(p,"%s",a);
	
	printf("%s\n",n);
	printf("%s",a);
	
	return 0;
	
}
