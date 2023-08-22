#include<stdio.h>
int main(){
	float m, p, c, com,e, per, tot, div;
	printf("Enter your marks in maths: ");
	scanf("%f", &m);
	printf("Enter your marks in physics: ");
	scanf("%f", &p);
	printf("Enter your marks in chemistry: ");
	scanf("%f", &c);
	printf("Enter your marks in computer: ");
	scanf("%f", &com);
	printf("Enter your marks in english: ");
	scanf("%f", &e);
	
	tot = m + p + c + com + e;
	printf("Total marks is = %f \n", tot);
	per = tot/5;
	printf("Total percentage is = %f \n", per);
	printf("The division is");
	if (per >= 90){
		printf("Distinction\n");
	}
	else if(per >= 80){
		printf("First Division");
	}
	else if((per >= 70)&&(per < 80)){
		printf("Second Division");
	}
	else if((per >= 60) && (per < 70)){
		printf("Third Division");
	}
	else if( per<40){
		printf("Failed");
	}
	
	
	
	
	
	
	
	printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t To find the total marks division and percentage. \n \n");
    return 0;
}
