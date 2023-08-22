//WAP to input 10 elements and print maximum and minimum value. Use array as pointer.
#include<stdio.h>
int main(){
	
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t To find max and min. \n\n");
	
	
	int n[10],max,min,i;
	int *a[10];
	printf("Input\n\n");
	for(i=0;i<10;i++){
		printf("Enter number in %d: ",i);
		scanf("%d",&n[i]);
		a[i]=&n[i];
	}
	max = 0;
	min = 0;
	for(i=0;i<10;i++){
		if(max < *a[i]){
			max = *a[i];
		}
		if(min > * a[i]){
			min = *a[i];
		}
	}

	printf("\nThe maximum value is: %d", max);
	printf("\nThe minimum value is: %d", min);
	return 0;
}
