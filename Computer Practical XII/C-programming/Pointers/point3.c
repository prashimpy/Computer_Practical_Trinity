//WAP to find sum and average of ‘n’ natural numbers using pointer.
#include<stdio.h>
int main(){
	
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t To find average of N numbers. \n\n");
	
	int n, sum, i;
	int *a;
	printf("Enter a number: ");
	scanf("%d",&n);
	a=&n;
	for(i=0;i<*a;i++){
		sum = sum + i;
	}
	printf("\nThe sum is: %d", sum);
	printf("\nThe average is: %d", sum / *a);
	return 0;
}
