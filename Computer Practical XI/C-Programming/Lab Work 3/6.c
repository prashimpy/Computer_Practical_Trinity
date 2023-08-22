#include<stdio.h>
int main(){
	int i, a,b;
	printf("What do you want to find the multiplicaton table of:");
	scanf("%d",&a);
	for (i=1;i<=10;i++){
	
		printf("%d x %d = %d \n",a,i,a*i);
	}
	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Multiplication Table  \n \n");
}
