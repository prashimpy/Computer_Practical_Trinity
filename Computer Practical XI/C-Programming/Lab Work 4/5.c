// wap to input 10 ages of a persons and count the total number of persons who have age
// 1) <=20
// 2) >20 and <100

#include<stdio.h>
int main(){
    int age[100], i, count1=0, count2=0;
    printf("Enter the age of the persons:\n");
    for(i=0;i<10;i++){
        printf("Position %d=>",i);
        scanf("%d",&age[i]);
        if(age[i]<=20){
            count1++;
        }
        if(age[i]>20 && age[i]<100){
            count2++;
        }
    }
    printf("The total number of persons who have age <=20 is= %d",count1);
    printf("\nThe total number of persons who have age >20 and <100 is= %d",count2);
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Count the total number of persons who have age. \n \n");
}