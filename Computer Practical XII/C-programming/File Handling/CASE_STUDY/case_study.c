// WAP to print the given menu below and make the program do the specific task.
// (the menu should be running at all times. Until the user specifies to exit)
//        Menu:
//        1. Add Item
//        2. Display Items
//        3. Update Item
//        4. Delete Item
//        5. Exit


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

// structure to store item;
struct i {
    int id;
    char name[50];
};

// function to create a new item;
struct i createi(int id, const char *name) {
    struct i newi;
    newi.id = id;
    strcpy(newi.name, name);
    return newi;
}

// function prototypes;
void add(FILE *p);
void display(FILE *p);
void update(FILE *p);
void del(FILE *p);
int menu();

int main(){
	printf("Author: \t Prashim Timsina. \n");
	printf("Program: \t Use ftell(),fseek and rewind().\n\n");
	int c;
	FILE *p;
	while(1){
		p = fopen("case_study.txt","a+");
		c = menu();
		switch (c) {
	        case 1:
	        	printf("\e[1;1H\e[2J");
	            add(p);
	            break;
	        case 2:
	        	printf("\e[1;1H\e[2J");
	            display(p);
	            break;
	        case 3:
	        	printf("\e[1;1H\e[2J");
	            update(p);
	            break;
	        case 4:
	        	printf("\e[1;1H\e[2J");
	            del(p);
	            break;
	        case 5:
	        	fclose(p);
	        	printf("\nProgram exited.\n");
	            exit(0);
	        default:
	            printf("Invalid choice. Please try again.\n");
	    }
	    printf("\e[1;1H\e[2J");
	    fclose(p);
	}
    return 0;
}

// function for displaying menu;
int menu(){
	int c;
	printf("\n---------------------");
	printf("\nMenu:\n");
	printf("---------------------\n");
    printf("1. Add Item\n");
    printf("2. Display Items\n");
    printf("3. Update Item\n");
    printf("4. Delete Item\n");
    printf("5. Exit\n");
    printf("---------------------\n");
    printf("\nYour choice is: ");
    scanf("%d", &c);
    return c;  
}

// function for adding data;
void add(FILE *p){
	
	printf("\n---------------------\n");
    printf("ADDING DATA...\n");
    printf("---------------------\n");
	
	int id;
    char name[50];

    printf("Enter ID: ");
    scanf("%d", &id);
    printf("Enter Name: ");
    scanf("%s", name);

    struct i newi = createi(id, name);

    fprintf(p, "%d %s\n", newi.id, newi.name);
    
    printf("\nItem added successfully!\n");
    printf("\nPress Enter to continue...");
    getch();
}

// function for displaying data;
void display(FILE *p){
	rewind(p);
	
	printf("\n---------------------\n");
    printf("PRINTING DATA...\n");
    printf("---------------------\n");

    struct i currenti;

    printf("\nItems in the file:\n\n");
    printf("--\t\t----\n");
    printf("Id\t\tName\n");
    printf("--\t\t----\n");
    while (fscanf(p, "%d %s", &currenti.id, currenti.name) != EOF) {
        printf("%d\t\t%s\n", currenti.id, currenti.name);
    }
    printf("\n\nPress Enter to continue...");
    getch();
}

// function for updating data;
void update(FILE *p){
	
	FILE *tf;
	tf = fopen("temp.txt", "w");
	
	printf("\n---------------------\n");
    printf("UPDATING DATA...\n");
    printf("---------------------\n");
	
	int id;
    char newn[50];

    printf("Enter the ID of the item to update: ");
    scanf("%d", &id);

    struct i currenti;
    long int currentp = ftell(p);

    while (fscanf(p, "%d%s", &currenti.id, currenti.name) != EOF) {
		if(currenti.id != id){
			fprintf(tf,"%d %s\n", currenti.id, currenti.name);
		}
		else{
			printf("\nEntering new data...\n\n");
            printf("Enter Name: ");
            scanf("%s", newn);
            fprintf(tf, "%d %s\n", currenti.id, newn);
		}
    }
    fclose(p);
    fclose(tf);

    // Replace the original file with the temp file
    remove("case_study.txt");
    rename("temp.txt", "case_study.txt");
    
    printf("\nItem Updated successfully!\n");
    printf("\nPress Enter to continue...");
    
    getch();
}

// function to delete a data;
void del(FILE *p){
	
	printf("\n---------------------\n");
    printf("DELETING DATA...\n");
    printf("---------------------\n");
	
	int id;

    printf("Enter the ID of the item to delete: ");
    scanf("%d", &id);

    struct i currenti;
    long int currentp = ftell(p);
    FILE *tf;
	tf = fopen("temp.txt", "w");

    while (fscanf(p, "%d %s", &currenti.id, currenti.name) != EOF) {
        if (currenti.id != id) {
            fprintf(tf, "%d %s\n", currenti.id, currenti.name);
        }
        currentp = ftell(p);
    }

    fclose(p);
    fclose(tf);

    // Replace the original file with the temp file
    remove("case_study.txt");
    rename("temp.txt", "case_study.txt");

    printf("\nItem deleted successfully!\n");
    printf("\nPress Enter to continue...");
    getch();
}


