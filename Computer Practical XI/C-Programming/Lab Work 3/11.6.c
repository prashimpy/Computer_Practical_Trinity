//wap to print the following pattern in c,
//101010
//202020
//101010
//202020





#include<stdio.h>  
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=6;j++){
            if(i%2==0){
                if(j%2==0){
                    printf("0");
                }
                else{
                    printf("2");
                }
            }
            else if(i%2==1){
                if(j%2==0){
                    printf("0");
                }
                else{
                    printf("1");
                }
            }
        }
        printf("\n");
    }
    
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Pattern  \n \n");
    return 0;
}