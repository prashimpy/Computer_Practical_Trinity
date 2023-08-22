#include<stdio.h>
#include<string.h>
int main() {
	int l, b, h, e;
	char c;
	
	float a, p, v;
	
	printf("Enter Length:");
	scanf("%d", &l);
	printf("Enter Breadth:");
	scanf("%d", &b);
	printf("Enter Height:");
	scanf("%d", &h);
	
	printf("\nWhat do you want to calculate?\n A-> Area\n P-> Perimeter\n V-> Volume\n E->Exit\n ");
	
	printf("\nEnter your response:");
	scanf("%s", &c);
	//printf("%c",c);
	printf("\n");
	
	
	switch (c){
		case 'A': 
			a = 2*(l*b+b*h+l*h);
			printf("The Area is : %.2f", a);
			break;
		case 'P':
			p = 4*(l+b+h);
			printf("The Perimeter is : %.2f", p);
			break;
		case 'V':
			v = l*b*h;
			printf("The Volume is : %.2f", v);
			break;	
		case 'E':
			break;	
		default:
			printf("Invalid Value!!\n");
			break;		
	
	}

	
	printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Case Study \n \n");

    return 0;
}




