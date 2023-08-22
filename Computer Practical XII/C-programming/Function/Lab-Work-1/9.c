#include <stdio.h>

// Function to add two matrices and store the result in the third matrix
void addMat(int r, int c, int m1[][c], int m2[][c], int res[][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            res[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

// Function to print a matrix
void printMat(int r, int c, int mat[][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printf("Author: Prashim Timsina\n");
    printf("Program: Sum of Two Matrices\n");

    int r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int mat1[r][c], mat2[r][c], resMat[r][c];

    // Input for matrix 1
    printf("\nEnter the elements of Matrix 1:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input for matrix 2
    printf("\nEnter the elements of Matrix 2:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Calling the function to add the matrices
    addMat(r, c, mat1, mat2, resMat);

    printf("\nMatrix 1:\n");
    printMat(r, c, mat1);

    printf("\nMatrix 2:\n");
    printMat(r, c, mat2);

    printf("\nSum of the matrices:\n");
    printMat(r, c, resMat);

    return 0;
}
