#include<stdio.h>
int main(){
	int i, a[100], s=0;
	float avg=0;
	printf("Enter the element in the array\n ");
	for(i=0;i<10;i++){
		printf("Position %d=>",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			s = s + a[i];
		}
	}
	printf("The sum is = : %d",s);
	avg = (float)s/10;
	printf("\nThe average is = : %.2f",avg);
	
	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Sum even numbers. \n \n");
	return 0;
}

