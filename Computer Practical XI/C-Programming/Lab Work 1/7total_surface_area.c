#include<stdio.h>
int main()
{
	int l, b, h, tsa;
    printf("Enter Length: ");
    scanf("%d", &l);
    printf("Enter Breath: ");
    scanf("%d", &b);
    printf("Enter Height: ");
    scanf("%d", &h);

    tsa =2*((l*b)+(b*h)+(l*h));

    printf("The Total surface area of a cuboid of length %d, breath %d, height %d, is = %d", l, b, h, tsa);

	
	printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t Total Surface Area of Cuboid \n \n");
	
	return 0;
}
