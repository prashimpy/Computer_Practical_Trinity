#include<stdio.h>
int main(){
	int i,n,f=1;
	printf("What do you want to find the factorial of:");
	scanf("%d", &n);

	
	for(i=1; i<=n; i++){
		printf("%d x ",i);
		f=f*i;
	}	


	printf("\n \n \nThe factorial of %d is %d",n,f);
	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Factorial \n \n");
	
}
