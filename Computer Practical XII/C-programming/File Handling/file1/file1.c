//WAP to input a sentence and store data in a data file "file.txt". And print them on screen. Use getc() and putc() functions.
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	
	printf("Author: \t Prashim Timsina. \n");
	printf("Program: \t Save and print data from a file.\n\n");
	
	FILE *p;
	char a;

	p = fopen("file1.txt","w");
	
	printf("Enter data to be inputted: \n");
	while((a=getchar())!=EOF){
		putc(a,p);
	}
	fclose(p);
	printf("\nOutputted data:\n");
	p = fopen("file1.txt","r");
	while((a=getc(p))!=EOF){
		putchar(a);
	}
	fclose(p);
}
