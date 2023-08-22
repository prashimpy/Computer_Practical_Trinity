// WAP to calculate sum, difference, product and division according to user choice using switch case.
#include <stdio.h>
int main(){
    int choice;
    float num1, num2, result;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter your choice:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    switch (choice){
        case 1:
            result = num1 + num2;
            printf("The sum of %.2f and %.2f is: %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("The difference of %.2f and %.2f is: %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("The product of %.2f and %.2f is: %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0){
                result = num1 / num2;
                printf("The division of %.2f and %.2f is: %.2f\n", num1, num2, result);
            }
            else{
                printf("Division by zero error!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t To calculate sum, difference, product and division according to user choice using switch case. \n \n");
    return 0;
}