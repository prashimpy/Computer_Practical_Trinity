// The minimum charge for Nepal Electricity authority is Rs. 80 for 20 units consumed. If a person consumes more than that then s/he has to pay Rs. 7.25 per unit extra up to 100. If the person consumes more than 100 units then he has to pay 9.50 per unit. Write a 'C' program to calculate the total bill.
#include<stdio.h>
int main(){
	int un, fin;
	printf("Enter your units consumed: ");
	scanf("%d", &un);
	if(un>100){
		fin = (un-100)*9.5 + ((un - 20)*7.25)+ 160;
	}
	else if(un>80 && un<=100){
		fin = (un-100)*7.25 + ((un - 20)*7.25)+ 160;
	}
	else if(un>20 && un<=80){
		fin = ((un - 20)*7.25)+ 160;
	}
	else{
		fin = un * 80;
	}
	printf("The final Bill is = %d", fin);
	printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t To calculate the total bill based on units consumed. \n \n");
	return 0;
}







