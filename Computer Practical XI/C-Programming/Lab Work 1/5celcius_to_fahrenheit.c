#include<stdio.h>
int main()
{
	float c, fah;
	printf("Enter your temperature in celcius =");
	scanf("%f", &c);
	fah = (float)((1.8*c) + 32);
	printf("The temperature in fahreheit scale of %f = %f", c, fah);
	
	printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t Celcius to Fahrenheit \n \n");
	
	return 0;
}
