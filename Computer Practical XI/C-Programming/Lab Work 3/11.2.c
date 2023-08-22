//wap to print the following pattern in c,
//*****
//****
//***
//**
//*

#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=6-i;j++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Pattern  \n \n");
    return 0;
}