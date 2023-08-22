// wap to reverse a string
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("The reversed string is: %s", strrev(str));

	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Reverse string. \n \n");
    return 0;
	
}