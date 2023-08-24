//WAP to show concept of ftell(), fseek() and rewind()  functions.

#include <stdio.h>

int main() {
	
	printf("Author: \t Prashim Timsina. \n");
	printf("Program: \t Use ftell(),fseek and rewind().\n\n");
	
    FILE *p = fopen("file8.txt", "r");
    
    long position = ftell(p);
    printf("Current position: %ld\n", position);

    fseek(p, 10, SEEK_SET); // Move 10 bytes from the beginning
    position = ftell(p);
    printf("Position after fseek(): %ld\n", position);
    
    // Reading and printing the content from the new position
    char ch;
    fscanf(p, "%c", &ch);
    printf("Content after fseek(): %c\n", ch);
    
    // Using rewind() to move the file pointer to the beginning
    rewind(p);
    position = ftell(p);
    printf("Position after rewind(): %ld\n", position);
    
    // Reading and printing content from the beginning again
    fscanf(p, "%c", &ch);
    printf("Content after rewind(): %c\n", ch);
    
    fclose(p);

    return 0;
}

