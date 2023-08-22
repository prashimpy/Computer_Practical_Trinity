// wap to change the case of a string (upper to lower and vice versa)

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("The Uppercase is: %s", strupr(str));
    printf("\nThe Lowercase is: %s", strlwr(str));
    
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Uppercase, Lowercase. \n \n");
    return 0;
    
}