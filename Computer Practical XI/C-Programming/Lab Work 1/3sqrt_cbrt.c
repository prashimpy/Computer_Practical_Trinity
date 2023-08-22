#include<stdio.h>
#include<math.h>
int main()
{
	float num1, square, cube;
	printf("Enter a number = ");
	scanf("%f", &num1);
	square = sqrt(num1);
	cube = cbrt(num1);
	
	printf("The square root of %f is = %f", num1,square);
	printf("\nThe cube root of %f is = %f", num1,cube);
	
	printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t Square root and cube root \n \n");
	
	return 0;
}
