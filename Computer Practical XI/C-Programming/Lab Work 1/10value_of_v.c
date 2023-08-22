#include<stdio.h>
#include<math.h>
int main(){
    int u , a, s, v;
    printf("Enter the value of u =");
    scanf("%d", &u);

    printf("Enter the value of s =");
    scanf("%d", &s);

    printf("Enter the value of u =");
    scanf("%d", &a);

    v = sqrt((u*u)+(2*a*s));

    printf("The value of v in the given equation is = %d", v);

    printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t To find the value of v in v2 = u2 + 2as \n \n");
}