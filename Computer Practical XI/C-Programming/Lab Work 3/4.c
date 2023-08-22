#include<stdio.h>
int main(){
	int i= 0 ,j = 0,n;
	printf("What do you want to find the factors of:");
	scanf("%d",&n);
	
	for (i=1; i<=n;i++){
			if (n%i==0){
				printf("%d, ",i);
		}
	}
	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Factors \n \n");
}
