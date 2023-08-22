// wap to input 10 strings and search a string in them.

#include<stdio.h>
#include<string.h>
int main(){
    char str[10][100];
    for(int i=0; i<10; i++){
        printf("Enter a string: ");
        gets(str[i]);
    }
    char search[100];
    printf("Enter a string to search: ");
    gets(search);
    int found = 0;
    for(int i=0; i<10; i++){
        if(strcmp(str[i], search) == 0){
            printf("The string is found at index %d", i);
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("The string is not found.");
    }

    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Search string. \n \n");
    return 0;
    
}