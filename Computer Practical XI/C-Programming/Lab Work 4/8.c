// To input two matrices of size 3x4 and print the sum of the two matrices.

#include<stdio.h>
int main(){
    int a[3][3], b[3][3], c[3][3], i,j;
    printf("Enter the element in the array:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Position %d,%d=>",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element in the array:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Position %d,%d=>",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The sum of the two matrices are:\n");
    for(i=0;i<3;i++){
        printf("|\t");
        for(j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Print the sum of two matrices. \n \n");
    return 0;
}
