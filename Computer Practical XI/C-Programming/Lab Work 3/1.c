// Wap to print the following series 1,3,5 to 20th terms.
#include<stdio.h>
int main (){
	int i = 0,a,b=1;
	for(i =0;i<20;i++){
		
        if (b%2 != 0)
		    printf("%d, ", b);

        b = b + 2;
	}

	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t 1,3,5 to 20th term. \n \n");

}

