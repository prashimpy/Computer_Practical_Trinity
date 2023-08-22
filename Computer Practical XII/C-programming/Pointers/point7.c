//WAP to sort 10 numbers stored in an array using pointer.
#include<stdio.h>
int main(){
	
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t To sort array. \n\n");
	
	int a[10],t;
	int *n[10];
	int i,j;
	for(i=0;i<10;i++){
		printf("Enter number in %d:",i);
		scanf("%d",&a[i]);
		n[i]=&a[i];
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(*n[j]>*n[i]){
				t = *n[i];
				*n[i] = *n[j];
				*n[j] = t;
			}
		}
	}

	printf("\nThe sorted Array is:\n");
	for(i=0;i<10;i++){
		printf("%d, ",*n[i]);
	}
	return 0;
}
