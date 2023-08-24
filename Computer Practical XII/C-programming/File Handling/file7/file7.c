//WAP to show the concept of rename() and remove() functions.
#include <stdio.h>

int main() {
	
	printf("Author: \t Prashim Timsina. \n");
	printf("Program: \t Use rename() and remove().\n\n");
	
    char oldFileName[] = "flie7.txt";   // Existing file name
    char newFileName[] = "file7.txt";   // New file name

    if (rename(oldFileName, newFileName) == 0) {
        printf("File renamed successfully.\n");
    } else {
        perror("Error renaming the file");
    }
    
    if (remove(newFileName) == 0) {
        printf("File removed successfully.\n");
    } else {
        perror("Error re the file");
    }

    return 0;
}

