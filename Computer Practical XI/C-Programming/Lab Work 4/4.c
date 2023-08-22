#include<stdio.h>
int main(){
	int  i,j,flag=0, b;
	printf("Enter the number you want to find:");
	scanf("%d",&b);
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	
	for(i=1;i<=10;i++){
		if(a[i]==b){
			flag = 1;
			break;
		}
	}
	if(flag == 1)
		printf("The number is found");
	else
		printf("The number is not found");
	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t To scan the array. \n \n");
	return 0;
	
}
