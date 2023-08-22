//WAP to perform arithmetic calculations (sum,difference, multiplication and division) of two numbers using pointers.
#include<stdio.h>
int main(){
	
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t To find sum, diff, product & div. \n\n");
	int *a, *b;
	int n1,n2,s,d,m,div;
	
	printf("Enter two numbers:");
	scanf("%d%d",&n1,&n2);
	a=&n1;
	b=&n2;
	printf("\nThe sum is: %d",*a+*b);
	printf("\nThe difference is: %d",*a- *b);
	printf("\nThe multiplication is: %d",*a * *b);
	printf("\nThe division is: %d", *a / *b);
	return 0;
}
