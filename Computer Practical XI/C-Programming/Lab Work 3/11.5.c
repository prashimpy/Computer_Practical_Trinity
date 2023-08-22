//wap to print the following pattern in c,
//12345
//23456
//34567
//45678

#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<=4;i++){
        for(j=1;j<=5;j++){
            printf("%d",j+i);
        }
        printf("\n");
    }
    
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Pattern  \n \n");
    return 0;
}