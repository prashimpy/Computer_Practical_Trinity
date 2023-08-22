// WAP to find the commission amount on the basis of sales amount.

#include <stdio.h>
int main(){
    int sales;
    printf("Enter sales amount:");
    scanf("%d", &sales);

    if (sales>5000){
        printf("Commission amount is %.2f", sales*0.10);
    }
    else if (sales>=1501){
        printf("Commission amount is %.2f", sales*0.02);
    }
    else if (sales>0){
        printf("Commission amount is %.2f", sales*0.01);
    }
    else{
        printf("No commission.");
    }
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t To find the commission amount on the basis of sales amount. \n \n");
    return 0;
}
