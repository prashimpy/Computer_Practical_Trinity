#include<stdio.h>
int main(){
	int a[200], i,j, b[10];
	printf("Enter the element in the array\n ");
	for(i=0;i<10;i++){
		printf("Position %d=>",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(a[i]<a[j]){
				b[i]=a[i];
				a[i]=a[j];
				a[j]=b[i];	
			}
		}
	}
	printf("\nThe Highest is : %d",a[0]);
	printf("\nThe Smallest is : %d",a[9]);
	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Smallest and Highest. \n \n");
	return 0;
}
