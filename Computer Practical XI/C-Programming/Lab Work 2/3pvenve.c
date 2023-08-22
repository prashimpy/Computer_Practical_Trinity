#include<stdio.h>
int main(){
	int a;
	printf("Enter a number:");
	scanf("%d", &a);
	if (a>0){
		printf("The number is Positive");
	}
	else if (a==0){
		printf("The number is Zero");
	}
	else{
		printf("The number is Negative");
	}
	printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t To check whether the number is Positive Negative or zero. \n \n");
    return 0;
}
