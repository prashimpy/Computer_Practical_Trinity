#include <stdio.h>

// Function prototype for array sum calculation
int calculateSum(int arr[], int size);

int main() {
    
    printf("Author: Prashim Timsina\n");
    printf("Program: Maximum of Two Numbers\n");

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = calculateSum(arr, size);
    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}

// Function to calculate the sum of elements in the array
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
