// Suppose we want to read a list of n floating point quantities and then calculate their average. In addition to simply calculating the average, however, we will also compute the deviation of each numerical quantity about the average, using the formula d=xi-avg where xi represents each of the given quantities i=1,2,…n and avg represents the calculated average. Write a program for this.


#include<stdio.h>
int main(){
    int i, n;
    float a[100], s=0, avg=0, d[100];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the element in the array:\n ");
    for(i=0;i<n;i++){
        printf("Position %d=>",i);
        scanf("%f",&a[i]);
        s = s + a[i];
    }
    avg = (float)s/n;
    printf("The sum is = : %.2f",s);
    printf("\nThe average is = : %.2f",avg);
    for(i=0;i<n;i++){
        d[i] = a[i] - avg;
    }
    printf("\nThe deviation of each numerical quantity about the average is:\n");
    for(i=0;i<n;i++){
        printf("Position %d=> %.2f",i,d[i]);
        printf("\n");
    }
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Sum even numbers. \n \n");
    return 0;
}
