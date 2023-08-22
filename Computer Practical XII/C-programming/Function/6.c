// to make y raise power to x Using function.
#include<stdio.h>
int powerfn(int x, int y);
int main(){
	
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t Power function \n");
	
	int a, b, res;
	
	printf("Enter a number:");
	scanf("%d", &b);
	printf("What power you want to raise?");
	scanf("%d", &a);
	
	res = powerfn(a, b);
	
	printf("The answer is = %d", res);
	return 0;
}

int powerfn(x,y){
	int i = 0, resu = 1;
	for(i = 0; i < x; i++){
		resu = resu * y;
	}
	return resu;
}
