//wap to input id, name and grade for 10 students.Then print them. Use array of structure concept.
#include<stdio.h>
struct students {
	int id;
	char name[10];
	int grade;
}v[10];
int main(){
	
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t To Print Using Structure. \n\n");
	
	
	
	int i;
	printf("Enter the data\n");
	printf("-----------------\n");
	for(i=0;i<3;i++){
		printf("Enter name:");
		scanf("%s",v[i].name);
		printf("Enter Id:");
		scanf("%d",&v[i].id);
		printf("Enter Grade:");
		scanf("%d",&v[i].grade);
	}
	printf("-----------------\n");
	printf("The output is: \n\n");
	printf("Name \t Id \t Grade\n");
	for(i=0;i<3;i++){
	
		printf("%s",v[i].name);
	
		printf("\t %d",v[i].id);
	
		printf("\t %d",v[i].grade);
		printf("\n");
	}
	return 0;
	
}
