#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    char subject[50];
} Teacher;

int main() {
    Teacher teachers[10];
    int i;
    
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t To print using typedef. \n\n");
	printf("-------------------\n");
	
    printf("Enter details of 10 teachers:\n");
    for ( i = 0; i < 2; i++) {
        printf("Enter details for teacher %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &teachers[i].id);
        printf("Name: ");
        scanf(" %[^\n]s", teachers[i].name);
        printf("Subject: ");
        scanf(" %[^\n]s", teachers[i].subject);
    }

	printf("-------------------\n");
    printf("\nDetails of the teachers:\n");
    printf("%s %s %s\n", "ID", "Name", "Subject");
    for (i = 0; i < 2; i++) {
        printf("%-4d %-20s %-20s\n", teachers[i].id, teachers[i].name, teachers[i].subject);
    }

    return 0;
}
