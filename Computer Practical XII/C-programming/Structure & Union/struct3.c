//wap to input employees' details with salary then print them. Use nested struct concept.
#include<stdio.h>

struct employee {
	char ename[100];
	char eaddress[100];
};
struct salarydetails {
	char pos[100];
	float salary;
	struct employee detail;
}payinfo;

int main(){
	
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t To print using nested struct. \n\n");
	
	
	int i;
	
	printf("Enter the data\n");
	printf("-----------------\n");
	
	
	printf("Enter name:");
	scanf("%s",payinfo.detail.ename);
	
	printf("Enter address:");
	scanf("%s",payinfo.detail.eaddress);

	printf("Enter position:");
	scanf("%s",payinfo.pos);
	
	printf("Enter salary:");
	scanf("%f",&payinfo.salary);
	
	printf("\n");
	printf("-----------------\n");
	printf("Output is:\n");
	
	printf("Name \t Address \t Position \t Salary\n");
	
	printf("%s \t %s \t %s \t %f",payinfo.detail.ename,payinfo.detail.eaddress,payinfo.pos,payinfo.salary);

	
	return 0;
	
}
