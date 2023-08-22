// Write a program to display name of day on the basis of entered number using switch. for example, 2 for Monday.
#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    switch (a){
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Invalid input!");
    }
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t To display name of day on the basis of entered number using switch.  \n \n");
    return 0;
}
