//WAP to input students’ name, grade and marks in five subjects. 
//Then store these all data with total and percentage in a data file “student.dat”. 
//Print all those data of students who have percentage >=80. 
//You may use fscanf() or fwrite().

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct marks{
	int phy;
	int chem;
	int math;
	int comp;
	int eng;
};

struct stdinfo {
	char n[100];
	int g;
	struct marks m;
}s;



int main(){
	
	printf("Author: \t Prashim Timsina. \n");
	printf("Program: \t Print data of students having 80%% or more.\n\n");
	
	
	FILE *p;
	char v;
	int tot;
	float per;
	
	p = fopen("file6.txt","w");
	
	printf("-----------------------\n");
	printf("Enter data in file.... \n");
	printf("-----------------------\n");
	
	do{
		printf("\n");
		
		printf("Enter Student Name: ");
		scanf("%s",s.n);
		fprintf(p,"%s ",s.n);
		
		printf("Enter Student Grade: ");
		scanf("%d",&s.g);
		fprintf(p,"%d ",s.g);
		
		printf("Enter Marks in Physics: ");
		scanf("%d",&s.m.phy);
		fprintf(p,"%d ",s.m.phy);
		
		printf("Enter Marks in Chemisty: ");
		scanf("%d",&s.m.chem);
		fprintf(p,"%d ",s.m.chem);
		
		printf("Enter Marks in Maths: ");
		scanf("%d",&s.m.math);
		fprintf(p,"%d ",s.m.math);
		
		printf("Enter Marks in Computer: ");
		scanf("%d",&s.m.comp);
		fprintf(p,"%d ",s.m.comp);
		
		printf("Enter Marks in English: ");
		scanf("%d",&s.m.eng);
		fprintf(p,"%d ",s.m.eng);
		
		tot =  s.m.phy + s.m.chem + s.m.math + s.m.comp + s.m.eng;
		per = (float)(tot*100)/500;
		
		fprintf(p,"%d ",tot);
		fprintf(p,"%f ",per);
		
//		printf("%f",per);
//		printf("%d",tot);
		
		printf("\nDo you want to continue?(y/n): ");
		v = getche();
		printf("\n");
		
	}while(v != 'n');
	fclose(p);
	
	p = fopen("file6.txt","r");
	
	printf("\n-----------------------------------------");
	printf("\nThe Students with 80%% and above is.... \n");
	printf("-----------------------------------------\n");
	
	printf("Name\tGrade\tPhysics\tChem\tMaths\tComp\tEnglish\tTotal\tPercentage\n");
	while(fscanf(p, "%s%d%d%d%d%d%d%d%f\n", s.n, &s.g, &s.m.phy, &s.m.chem, &s.m.math, &s.m.comp, &s.m.eng, &tot, &per) != EOF){
        if(per >= 80){
        	
        	printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%f",s.n, s.g, s.m.phy, s.m.chem, s.m.math, s.m.comp, s.m.eng, tot, per);
//        	printf("Student's Name: %s",s.n);
//        	printf("\nStudent's Grade: %d",s.g);
//        	printf("\nStudent's Marks in Physics : %d",s.m.phy);
//        	printf("\nStudent's Marks in Chemistry : %d",s.m.chem);
//        	printf("\nStudent's Marks in Math : %d",s.m.math);
//        	printf("\nStudent's Marks in Computer : %d",s.m.comp);
//        	printf("\nStudent's Marks in English : %d",s.m.eng);
//        	printf("\nTotal Marks: %d", tot);
//        	printf("\nPercentage: %.2f %%", per);
        	printf("\n");
		}
    }
    
	fclose(p);
	return 0;
}




