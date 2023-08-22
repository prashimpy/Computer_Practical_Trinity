// wap to check if a string is a palindrome or not.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int i=0, j=strlen(str)-1;
    while(i<j){
    	if(str[i] != str[j]){
    		printf("The string is not a palindrome.");
            
            printf("\n \n Author: \t Prashim Timsina ");
            printf("\n Program: \t Palindrome string. \n \n");
    		return 0;
        }
        i++;
        j--;
    }
    printf("The string is a palindrome.");

    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Palindrome string. \n \n");
    return 0;
    
}