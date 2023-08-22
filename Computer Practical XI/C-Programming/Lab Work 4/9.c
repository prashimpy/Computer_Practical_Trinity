// To transpose a 3x4 matrix.

#include<stdio.h>
int main(){
    int a[3][4], b[4][3], i,j;
    printf("Enter the element in the array:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Position %d,%d=>",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            b[j][i]=a[i][j];
        }
    }
    printf("The transpose of the matrix is:\n");
    for(i=0;i<4;i++){
        printf("|\t");
        for(j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Transpose of a 3x4 matrix. \n \n");
    return 0;
}