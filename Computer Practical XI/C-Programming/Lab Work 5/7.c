// wap to find the length of a string without using strlen() function

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i=0;
    printf("Enter a string: ");
    gets(str);
    while(str[i] != '\0'){
        i++;
    }
    printf("The length of the string is: %d", i);

    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Length of string. \n \n");
    return 0;
    
}