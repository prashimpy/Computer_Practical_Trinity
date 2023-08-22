#include<stdio.h>
int main(){
	char a[10][10];
	int i,j;
	printf("Enter Strings: \n");
	for(i=0;i<5;i++){
		printf("Pos %d => ",i);
		scanf("%s", &a[i]);
	}
	printf("The string you enterd are: \n"); 
	for(i=0;i<5;i++){
		printf("%s, ",a[i]);
	}
	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Printing strings. \n \n");
    return 0;
	
	
}
