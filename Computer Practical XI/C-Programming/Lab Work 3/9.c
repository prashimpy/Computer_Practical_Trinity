// wap to check whether a number is palindrome or not.

#include <stdio.h>
int main(){
	int n, rev = 0, rem, org;
	printf("Enter an integer: ");
	scanf("%d", &n);
	org = n;
	while (n != 0) {
		rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}
	if (org == rev)
		printf("%d is a palindrome number.", org);
	else
		printf("%d is not a palindrome number.", org);

	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Palindrome number  \n \n");

	return 0;
}

