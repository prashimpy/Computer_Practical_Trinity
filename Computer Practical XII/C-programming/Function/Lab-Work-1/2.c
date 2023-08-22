// to calculate the area and the perimeter of a rectangle.
#include<stdio.h>
int area(int a, int b);
int perimeter(int a, int b);

int main(){
	
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t Area and Perimeter \n");
	
	int l, b, aream, perimeterm;
	
	printf("Enter length and breath: ");
	scanf("%d%d", &l, &b);
	
	aream = area(l,b);
	perimeterm = perimeter(l,b);
	
	printf("\nThe area is = %d", aream);
	printf("\nThe perimeter is = %d", perimeterm);
	
	return 0; 
}
int area(a, b){
	return a*b;
}

int perimeter(a, b){
	return 2*(a+b);
}
