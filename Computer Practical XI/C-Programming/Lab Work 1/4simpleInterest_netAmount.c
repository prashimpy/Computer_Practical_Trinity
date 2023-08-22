#include<stdio.h>
#include<math.h>
int main()
{
	float P, R,T, SI, A;
	
	printf("Enter Principle = ");
	scanf("%f", &P);
	printf("Enter Rate = ");
	scanf("%f", &R);
	printf("Enter Time = ");
	scanf("%f", &T);
	
	SI = (P*R*T)/100;
	A = SI + P;
	
	printf("The simple interest is = %f", SI);
	printf("The net amount i = %f", A);
	
	printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t Simple Interest and net amount \n \n");
	
	return 0;
}
