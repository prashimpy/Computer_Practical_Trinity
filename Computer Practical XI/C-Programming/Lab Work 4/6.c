//print the ages in ascending form

#include<stdio.h>
int main(){
    int age[100], i, j, b[10];
    printf("Enter the age of the persons:\n");
    for(i=0;i<10;i++){
        printf("Position %d=>",i);
        scanf("%d",&age[i]);
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(age[i]>age[j]){
                b[i]=age[i];
                age[i]=age[j];
                age[j]=b[i];	
            }
        }
    }
    printf("The ages in ascending form are:\n");
    for(i=0;i<10;i++){
        printf("%d, ",age[i]);
    }
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Print the ages in ascending form. \n \n");
}

