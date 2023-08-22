#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter first number:");
	scanf("%d", &a);
	printf("Enter second number:");
	scanf("%d", &b);
	printf("Enter third number:");
	scanf("%d", &c);
	if((a<b && b<c)||(a>b && b>c)){
		printf("The middle number is %d", b);
	}
	else if ((b<a && a<c)||(b>a && a>c)){
		printf("The middle number is %d", a);
	}
	else{
		printf("The middle number is %d", c);
	}
	printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t To check whether the number is middle number. \n \n");
    return 0;
}
