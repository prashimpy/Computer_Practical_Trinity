// WAP to know whether three numbers are equal or not using nested if.
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    printf("Enter third number:");
    scanf("%d",  &c);
    if (a==b){
        if (b==c){
            printf("All three numbers are equal.");
        }
        else{
            printf("First two numbers are equal.");
        }
    }
    else if (b==c){
        printf("Last two numbers are equal.");
    }
    else if (a==c){
        printf("First and last numbers are equal.");
    }
    else{
        printf("All three numbers are not equal.");
    }
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t To know whether three numbers are equal or not using nested if. \n \n");
    return 0;
}