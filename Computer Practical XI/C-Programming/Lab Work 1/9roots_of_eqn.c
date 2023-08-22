#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, d, r1, r2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    // calculating discriminant
    d = b * b - 4 * a * c;

    // checking if the equation has real roots
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots of the equation are %.2f and %.2f", r1, r2);
    }
    else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("The roots of the equation are equal and equal to %.2f", r1);
    }
    else {
        printf("The equation has no real roots");
    }

	
	printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t Roots of Quadratic equations \n \n");
	
	return 0;
}