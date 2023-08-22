//WAP to swap two values using call by reference and call by value.
#include<stdio.h>
void swap(int *x, int *y);
int main(){
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t To swap values. \n\n");
	int n1, n2;
	printf("Enter two numbers: ");
	scanf("%d%d",&n1,&n2);
	printf("\nBefore swap: a=%d b=%d", n1, n2);
	swap(&n1,&n2);
	printf("\nAfter swap: a=%d b=%d", n1, n2);
	return 0;
}
void swap(int *x, int *y){
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

//#include<stdio.h>
//void swap(int x, int y);
//int main(){
//	printf("Author: \t Prashim Timsina \n");
//	printf("Program: \t To swap values. \n\n");
//	int n1, n2;
//	printf("Enter two numbers: ");
//	scanf("%d%d",&n1,&n2);
//	printf("\nBefore swap: a=%d b=%d", n1, n2);
//	swap(n1,n2);
//	printf("\nAfter swap: a=%d b=%d", n1, n2);
//	return 0;
//}
//void swap(int x, int y){
//	int t;
//	t = x;
//	x = y;
//	y = t;
//}
