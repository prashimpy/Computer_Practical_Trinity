#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[30];
	char address[30];
}s[20];
int main()
{
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t To sort names. \n\n");
	printf("-------------------\n");
	
	struct student temp;
	int i,j;
	for(i=0;i<2;i++)
	{
	printf("Enter id, name and address: ");
	scanf("%d%s%s",&s[i].id,s[i].name,s[i].address);
	}
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<2;j++)
		{
			if(strcmp(s[i].name,s[j].name)>0)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("-------------------\n");
	printf("Records in Sorted order by Name \n");
	for(i=0;i<2;i++)
	{
		printf("%d\t %s\t %s\n",s[i].id,s[i].name,s[i].address);
	}  
	return 0;
}
