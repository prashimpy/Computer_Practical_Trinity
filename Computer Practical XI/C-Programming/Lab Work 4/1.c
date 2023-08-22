#include<stdio.h>
int main(){
	int a[10], i,s,avg;
	printf("Enter the element in the array\n ");
	for(i=0;i<10;i++){
		printf("Position %d=>",i);
		scanf("%d",&a[i]);
	}
	printf("The Elements are:\n");
	for(i=0;i<10;i++){
		s= s+a[i];
		printf("%d, ",a[i]);
	}
	
	
	
	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Print 10 elements. \n \n");
	return 0;
}
