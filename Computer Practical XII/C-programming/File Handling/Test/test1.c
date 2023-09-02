#include<stdio.h>
#include<stdio.h>
#include<string.h>
struct stdata{
	int id;
	char n[100];
	int g;
}s;

int main(){
	int c;
	c = 0;
	FILE *p;
	char v;
	p = fopen("test1.txt","r");
	while(fscanf(p,"%d%s%d",&s.id,s.n,&s.g) != EOF){
		c = s.id;
	}
	printf("%d", c);
	fclose(p);
	p = fopen("test1.txt","a");
	do{
		c++;
		printf("Enter Name: ");
		scanf("%s",s.n);
		printf("Grade: ");
		scanf("%d",&s.g);
		s.id = c;
		fprintf(p,"%d\t%s\t%d \n", s.id, s.n, s.g);
		
		printf("Do you want to continue? (y/n): ");
		fflush(stdin);
		v = getche();
		
	}while(v == 'y');
	fclose(p);
	p = fopen("test1.txt","r");
	
}
