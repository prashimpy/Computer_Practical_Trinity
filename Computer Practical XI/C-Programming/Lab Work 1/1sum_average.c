#include<stdio.h>
int main()
{
	int num1,num2,num3; 
	float sum, average;
	
	printf("Enter 3 numbers = ");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	sum = num1 + num2 + num3;
	printf(" \n The sum of  %d,  %d , %d is = %f", num1,num2,num3, sum);
	
	average =(float)sum/3;
	printf("\n The average of %d,  %d , %d  is = %f", num1, num2, num3,average);
	
	printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t Sum and average of 3 numbers \n \n");
	
	return 0;
}
