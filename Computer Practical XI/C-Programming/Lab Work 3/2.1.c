#include<stdio.h>
int main (){
	int i = 0,a,b=1;
	for(i =0;i<100;i+=2){
		printf("%d\n", i);
		a = a + i;
	}
	printf("The sum is: %d", &a);
	
	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Case Study \n \n");

}
