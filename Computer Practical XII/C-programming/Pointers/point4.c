//Use array to input 10 elements and print them.Use array as pointer.
#include<stdio.h>
int main(){
	
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t To input 10 elements and print them. \n\n");
	
	int a[10],i;
	int *n;
	
	printf("Input\n");
	for(i=0;i<10;i++){
		printf("Enter a number in %d : ", i);
		scanf("%d",&a[i]);
	}
	n=a;
	printf("\n");
	printf("The elements are: \n");
	for(i=0;i<10;i++){
		printf("%d ",*n);
		n++;
	}
	return 0;
	
}
