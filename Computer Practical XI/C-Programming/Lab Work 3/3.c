#include<stdio.h>
int main(){
	int i = 0,n;
	float a=1;
	printf("How many terms do you want to print:");
	scanf("%d",&n);
	for (i= 1;i<=n;i++){
		printf("1/%d ,",i);
		a = a + (float)1/i;
		printf("%f\n",a);
	}
	printf("The sum is= %f",a);
	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t 1,1/2,1/3,1/4.. 1/nth term \n \n");
	return 0;
}
