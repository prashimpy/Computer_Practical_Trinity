// WAP that inputs cost price (cp) and selling price (sp) and determine whether there is loss or gain.
#include <stdio.h>
int main(){
    int cp, sp;
    printf("Enter cost price:");
    scanf("%d", &cp);
    printf("Enter selling price:");
    scanf("%d", &sp);
    if (cp>sp){
        printf("There is loss of %d", cp-sp);
    }
    else if (sp>cp){
        printf("There is gain of %d", sp-cp);
    }
    else{
        printf("There is no gain or loss.");
    }
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t To check whether there is loss or gain. \n \n");
    return 0;
}