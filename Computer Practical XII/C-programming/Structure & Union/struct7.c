#include<stdio.h>
 union student
{
	int id;
	char name[30];
	int grade;
} s;
int main()
{
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t To use union. \n\n");
	printf("-------------------\n");
	
	printf("Enter student id: ");
	scanf("%d",&s.id);
	printf("Student ID: %d\n ",s.id);
	printf("\n");
	printf("Enter name : ");
	scanf("%s",s.name);
	printf("Name : %s\n",s.name);
	printf("\n");
	printf("Enter grade : ");
	scanf("%d",&s.grade);
	printf("Grade : %d\n",s.grade);
  return 0;
}
