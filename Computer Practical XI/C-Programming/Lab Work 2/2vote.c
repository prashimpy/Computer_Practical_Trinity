#include<stdio.h>
int main(){
	int a;
	printf("Enter your age:");
	scanf("%d", &a);
	if (a >= 18){
		printf("You are eligible to vote.");
	}
	else {
		printf("You are not eligible to vote.");
	}
	printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t To check whether you can vote or not. \n \n");
    return 0;
}
