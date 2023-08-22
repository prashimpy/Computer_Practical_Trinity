#include<stdio.h>
int main(){
    int a ;
    printf("Enter a number:");
    scanf("%d", &a);
    if (a % 2 == 0){
        printf("The given number is Even");
    }
    else {
        printf("The given number is Odd");
    }
    
    printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t To check whether the number is odd or even \n \n");
    return 0;
}
