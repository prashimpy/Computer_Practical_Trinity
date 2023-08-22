#include<stdio.h>
int main(){
	int sec, h, m, s;
	printf("Input seconds: ");
	scanf("%d", &sec);
	
	h = (sec/3600); 
	
	m = (sec -(3600*h))/60;
	
	s = (sec -(3600*h)-(m*60));
	
	printf("Hours=%d Minutes=%d Seconds=%d  \n",h,m,s);

    printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t To write seconds in form of hours minutes and seconds \n \n");
}