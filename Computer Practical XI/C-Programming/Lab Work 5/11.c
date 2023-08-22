// wap to input 10 names and arrange them in ascending order.

#include<stdio.h>
#include<string.h>
int main(){
    char str[10][100];
    for(int i=0; i<10; i++){
        printf("Enter a name: ");
        gets(str[i]);
    }
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(strcmp(str[i], str[j]) > 0){
                char temp[100];
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("The sorted names are: ");
    for(int i=0; i<10; i++){
        printf("%s, ", str[i]);
    }

    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Sort names. \n \n");
    return 0;
    
}