// To find the sum of diagonal elements of 3x3 matrix.

#include<stdio.h>
int main(){
    int a[3][3], i,j,s=0;
    printf("Enter the element in the array:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Position %d,%d=>",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                s=s+a[i][j];
            }
        }
    }
    printf("The sum of the diagonal elements is %d",s);
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Sum of diagonal elements of 3x3 matrix. \n \n");
    return 0;
}