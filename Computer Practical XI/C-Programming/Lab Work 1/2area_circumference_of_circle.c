#include<stdio.h>
int main()
{
	int radius; 
	float area, circumference;
	
	printf("Enter Radius = ");
	scanf("%d",&radius);
	
	area = (float)3.14 * radius * radius;
	printf(" \n The area of circle with radius %d is = %f", radius, area);
	
	circumference =(float)2*3.14*radius;
	printf("\n The circumference of circle with radius %d  is = %f", radius,circumference);
	
	printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t Area and Circumference of a circle \n \n");
	
	return 0;
}
