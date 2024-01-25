#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main() {
    FILE *ptr = NULL;
    char s;
    char str[12];

    ptr = fopen("k.txt", "w");
    
    fprintf(ptr,"hello");


    fclose(ptr);
    ptr = fopen("k.txt", "r");

    if (ptr == NULL) {
        printf("File not found or error in opening the file.\n");
        return 1; 
    }

    s = fgetc(ptr);
    printf("%c \n", s);
	rewind(ptr);
    fgets(str, 5, ptr); 
    printf("%s", str);

    fclose(ptr);
    return 0;
}

