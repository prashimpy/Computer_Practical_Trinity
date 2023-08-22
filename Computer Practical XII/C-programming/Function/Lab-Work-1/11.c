#include <stdio.h>

// Function to find the length of a string
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    printf("Author: Prashim Timsina\n");
    printf("Program: Finding the Length of a String\n\n");

    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int length = stringLength(str);
    printf("Length of the string: %d\n", length);

    return 0;
}

