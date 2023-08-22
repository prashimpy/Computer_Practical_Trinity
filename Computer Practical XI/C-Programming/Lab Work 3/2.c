#include<stdio.h>
int main (){
	int i = 0,a,b=0,c=0;
	for(i =0;i<100;i++){
		
        if (b%2 == 0)
		    printf("%d\n", b);
            a = a + b;
            c = c + 1;

        b = b + 2;
	}
    printf("The sum is: %d", a);
    printf("\nThe total number of even numbers is: %d", c);
	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t 2,4,6 to 100th term. \n \n");
    return 0;

}