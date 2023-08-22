#include<stdio.h>
int main(){
	int wh, et,fin;
	printf("Enter the time youve worked: ");
	scanf("%d", &wh);
	if (wh<=8){
		fin = wh * 100;
	}
	else if( wh>8){
		et = wh - 8;
		fin = (et*120) + 800;
	}
	printf("The salary of the employee is = %d",fin);
	
	printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t To find the salary of the employee. \n \n");
    return 0;
}
