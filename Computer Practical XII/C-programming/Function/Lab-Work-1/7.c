// to print the sum of series from 1 to 200
#include<stdio.h>
int series();
int main(){
	
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t Sum of series \n");
	
	
	int a;
	a = series();
	printf("The sum is = %d", a);
	return 0;
}
int series(){
	int sum, i = 1;
	for(i = 1; i<=200; i++){
		sum = sum + i;
	}
	return sum;
}
