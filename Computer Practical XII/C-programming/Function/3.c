//WAP to know a number is even or odd using function.
#include<stdio.h>
int even_odd(int n);
int main()
{
    printf("Author: \t Prashim Timsina. \n");
	printf("Program: \t Even or odd.\n");

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    even_odd(n);
    return 0;
}
int even_odd(int n)
{
    if(n%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}