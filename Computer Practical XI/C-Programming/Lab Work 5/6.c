// wap to concatenate two strings

#include<stdio.h>
#include<string.h>
int main(){
    char str[100], str2[100];
    printf("Enter a string: ");
    gets(str);
    printf("Enter another string: ");
    gets(str2);
    strcat(str, str2);
    printf("The concatenated string is: %s", str);

    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Concatenate string. \n \n");
    return 0;
    
}