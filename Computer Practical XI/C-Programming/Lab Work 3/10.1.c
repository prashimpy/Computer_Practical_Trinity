
//wap to find the total number of prime numbers between 1 to 100.
#include <stdio.h>
int main(){
    int i, j, flag;
    printf("Prime numbers between 1 to 100 are: \n");
    int s = 0;
    for (i = 1; i <= 100; ++i) {
        if (i == 1 || i == 0)
            continue;
        flag = 1;
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1){
            s++;
            printf("%d, ", i);
        }
            
    }
    printf("\nThe number of prime numbers are = %d", s);
    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Prime number  \n \n");
    return 0;
}