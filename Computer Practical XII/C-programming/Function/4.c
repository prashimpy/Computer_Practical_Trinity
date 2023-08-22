// to know whether a number is prime or composite
#include<stdio.h>

int prime(int a);

int main(){
	
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t Prime or Composite \n");
	
	int num, p, c;
	printf("Enter a number:");
	scanf("%d", &num);
	
	p = prime(num);
	
	if(p == 0){
		printf("The number is Prime");
	}
	else{
		printf("The number is composite");
	}
	return 0;
}

int prime(a){
	int b;
	for(b=2; b<a/2; b++){
		if(a%b==0){
			return 1;
		}	
	}
	return 0;
}
