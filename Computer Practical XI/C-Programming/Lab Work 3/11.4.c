//wap to print the following pattern in c,
//5
//44
//333
//2222
//11111

#include<stdio.h>
int main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=6-i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Pattern  \n \n");
    return 0;
}