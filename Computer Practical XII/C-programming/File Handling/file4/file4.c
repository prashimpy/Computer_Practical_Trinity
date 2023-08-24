//WAP to store book’s name, edition and price in a data file “book.txt” using yes/no options. 
//It means the computer stores data until you say ‘n’. 
//Then print them on screen.

#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
	
	printf("Author: \t Prashim Timsina. \n");
	printf("Program: \t Store and print book details using (y/n).\n\n");
	
	FILE *p;
	
	char n[100], e[100], v;
	int pr;
	
	p = fopen("file4.txt","w");
	printf("-----------------------\n");
	printf("Enter data in file.... \n");
	printf("-----------------------\n");
	do{
		printf("\n");
		
		printf("Enter Book Name: ");
		scanf("%s",n);
		fprintf(p,"%s ",n);
		
		printf("Enter Book Edition: ");
		scanf("%s",e);
		fprintf(p,"%s ",e);
		
		printf("Enter Book Price: ");
		scanf("%d",&pr);
		fprintf(p,"%d ",pr);
		fprintf(p,"\n");
		
		printf("\nDo you want to continue?(y/n): ");
		v = getche();
		printf("\n");
	}while(v != 'n');
	
	fclose(p);
	
	
	p = fopen("file4.txt","r");
	
	printf("\n---------------------------");
	printf("\nThe Outputted data is.... \n");
	printf("---------------------------\n");
	printf("Name\t\tEdition\t\tPrice\n");
	printf("-------------------------------------------\n");
	
	while(fscanf(p, "%s%s%d\n", n, e, &pr) != EOF){
        printf("%s\t\t%s\t\t%d\n", n, e, pr);
    }
    
    fclose(p);
    
	return 0;
	
}

