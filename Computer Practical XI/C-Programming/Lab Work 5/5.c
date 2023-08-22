// wap to copy a string in another variable.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100], str2[100];
    printf("Enter a string: ");
    gets(str);
    strcpy(str2, str);
    printf("The copied string is: %s", str2);

    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Copy string. \n \n");
    return 0;
    
}