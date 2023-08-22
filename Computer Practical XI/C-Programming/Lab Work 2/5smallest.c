// WAP to input three numbers and find the smallest of them.
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    printf("Enter third number:");
    scanf("%d",  &c);
    if (a<b && a<c){
        printf("%d is the smallest number.", a);
    }
    else if (b<a && b<c){
        printf("%d is the smallest number.", b);
    }
    else{
        printf("%d is the smallest number.", c);
    }
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t To find the smallest of three numbers. \n \n");
    return 0;
}