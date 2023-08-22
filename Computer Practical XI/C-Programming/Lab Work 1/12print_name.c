#include<stdio.h>
int main(){
    char name[20], address[20], grade[20];
    printf("Enter your name:");
    scanf("%s", &name);

    printf("Enter your address:");
    scanf("%s", &address);

    printf("Enter your grade:");
    scanf("%s", &grade);

    printf("Your name is %s \n", name);
    printf("Your address is %s \n ", address);
    printf("Your grade is %s \n", grade);
    
    printf("\n \n Author: \t Prashim Timsina ");
	printf("\n Program: \t To print you name, address, grade \n \n");
}
