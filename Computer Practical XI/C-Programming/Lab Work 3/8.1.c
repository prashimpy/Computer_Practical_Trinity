#include <stdio.h>
#include <math.h>

int main() {
    int num, o, rem, n = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    for(num = 1; num<=1000; num++){
        o = num;
        while (o != 0) {
            o /= 10;
            ++n;
        }
        o = num;
        while (o != 0) {
            rem = o % 10;
            result += pow(rem, n);
            o /= 10;
        }
        if ((int)result == num)
            printf("%d, ", num); 
    }
	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Armstrong number  \n \n");
    
    return 0;
}