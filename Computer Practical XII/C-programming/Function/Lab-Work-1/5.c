// to print a multiplication table of a given number
#include<stdio.h>
int multi(int a);
int main(){
	
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t Multiplication Table \n");
	
	int num;
	printf("Enter  a number which you want to print the table of:");
	scanf("%d", &num);
	multi(num);
	return  0;
}
int multi(a){
	int i = 0;
	for(i = 1; i<=10; i++){
		printf("%d x %d = %d \n", a, i, a*i);
	}
	return 0;
}

