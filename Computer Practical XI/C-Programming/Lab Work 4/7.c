// To input elements in 3x3 matrix and print the matrix.

#include<stdio.h>
int main(){
    int a[3][3], i,j;
    printf("Enter the element in the array:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Position %d,%d=>",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Elements are:\n");
    for(i=0;i<3;i++){
        printf("|\t");
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("|");

        printf("\n");
    }
 
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Print 3x3 matrix. \n \n");
    return 0;
}
