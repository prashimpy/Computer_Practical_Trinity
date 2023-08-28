//WAP to show the concept of rename() and remove() functions.
// to update data in a data file
#include<stdio.h>
#include<string.h>
#include<conio.h>

struct employee {
	int id;
	char n[100];
	char d[100];
	int s;
	
}e;

int main(){
	
	printf("Author: \t Prashim Timsina. \n");
	printf("Program: \t Use fwrite() and fread().\n\n");
	
	FILE *p;
	FILE *p1;
	char v;
	int tid,ts;
	char tn[100],td[100];
	
	p = fopen("file7.txt","w");
	
	printf("-----------------------\n");
	printf("Enter data in file.... \n");
	printf("-----------------------\n");
	do{
		printf("\n");
		
		printf("Enter Employee Id: ");
		scanf("%d",&e.id);
		
		printf("Enter Employee Name: ");
		scanf("%s",e.n);
		
		printf("Enter Employee Designation: ");
		scanf("%s",e.d);
		
		printf("Enter Employee Salary: ");
		scanf("%d",&e.s);
		
		fwrite(&e, sizeof(struct employee), 1, p);
		
		printf("\nDo you want to continue?(y/n): ");
		v = getche();
		printf("\n");
		
	}while(v != 'n');
	
	fclose(p);
	
	p = fopen("file7.txt","r");
	p1= fopen("file7temp.txt","w");
	
	printf("\n---------------------------");
	printf("\nThe Stored data is.... \n");
	printf("---------------------------\n");
	while(fread(&e, sizeof(struct employee),1, p)){
		printf("\nId: %d", e.id);
		printf("\nName: %s",e.n);
		printf("\nDesignation: %s",e.d);
		printf("\nName: %d",e.s);
		printf("\n");
	}
	
	printf("\n---------------------------");
	printf("\nUpdating Data.... \n");
	printf("---------------------------\n");
	
	printf("\nEnter Id of data to be updated: ");
	scanf("%d", &tid);
	
	rewind(p);
	//to update
	while(fread(&e, sizeof(struct employee),1, p)){
		if(e.id == tid){
			printf("\nData found successfully!!!\n\n");
			printf("Enter Updated Name: ");
			scanf("%s",e.n);
			printf("Enter Updated Designation: ");
			scanf("%s", e.d);
			printf("Enter Updated Salary: ");
			scanf("%d", &e.s);
			fwrite(&e, sizeof(struct employee), 1, p1);
		}
		else{
			fwrite(&e, sizeof(struct employee), 1, p1);	
		}
		printf("\n");
	}
	
	fclose(p);
	fclose(p1);
	
	remove("file7.txt");
	rename("file7temp.txt","file7.txt");
	
	p = fopen("file7.txt","r");
	
	printf("\n---------------------------");
	printf("\nThe Updated data is.... \n");
	printf("---------------------------\n");
	rewind(p);
	while(fread(&e, sizeof(struct employee),1, p)){
		printf("\nName: %s",e.n);
		printf("\nDesignation: %s",e.d);
		printf("\nName: %d",e.s);
		printf("\n");
	}
	fclose(p);
	return 0;
	
}
