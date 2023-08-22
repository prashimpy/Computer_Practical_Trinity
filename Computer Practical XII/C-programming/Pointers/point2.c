//WAP to know a number is even or odd using pointer.
#include<stdio.h>
int main(){
	
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t To check whether the num is even or odd. \n\n");
	
	int *a;
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	a=&n;
	if(*a%2==0){
		printf("The number is Even!!!");
	}
	else{
		printf("The number is Odd!!!");
	}
	return 0;
}
