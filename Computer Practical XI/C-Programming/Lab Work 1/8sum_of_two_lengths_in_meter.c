#include<stdio.h>
int main()
{
	int m1, km1, m2, km2, sumkm, summ, tot, outkm, outm;
    printf("Enter first length in kilomeer and meter:");
    scanf("%d%d", &km1, &m1);

    printf("Enter second length in kilomeer and meter:");
    scanf("%d %d", &km2, &m2);
    km1 = km1 * 1000;
    km2 = km2 * 1000;
    sumkm = km1 + km2;
    summ = m1 + m2;
    tot = sumkm + summ;
    outkm = tot / 1000;
    outm = tot % 1000;

    printf("The Sum of given distance is = %dkm and %dm", outkm, outm);

	
	printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t Sum of Two Lengths in Meter and Kilometer \n \n");
	
	return 0;
}
