//To print multiplication table using pointer.
#include<stdio.h>
int main(){
	
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t To find multiplication table. \n\n");
	
	int n,i;
	int *p;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("\n");
	p=&n;
	for(i=1;i<=10;i++){
		printf("%d x %d = %d\n",*p, i, *p * i);
	}
	return 0;
}
