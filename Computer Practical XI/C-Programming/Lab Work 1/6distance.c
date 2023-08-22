#include<stdio.h>
int main()
{
	float u,t,a,s;
	printf("Enter initial velocity =");
	scanf("%f", &u);
	printf("Enter time =");
	scanf("%f", &t);
	printf("Enter acceleration =");
	scanf("%f", &a);
	s = (u*t)+(0.5*a*t*t);
	printf("The distance covered with, \ninitial velocity= %f\n time= %f \n acceleration = %f is = %f", u,t,a,s );
	
	printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t Find the value of S \n \n");
	
	return 0;
}
