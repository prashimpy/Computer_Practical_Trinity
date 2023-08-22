// wap to convert into lowercase without using strlwr() function

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i=0;
    printf("Enter a string: ");
    gets(str);
    while(str[i] != '\0'){
        if(str[i] >= 65 && str[i] <= 90){
            str[i] = str[i] + 32;
        }
        i++;
    }
    printf("The lowercase string is: %s", str);

    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Lowercase string. \n \n");
    return 0;
    
}
