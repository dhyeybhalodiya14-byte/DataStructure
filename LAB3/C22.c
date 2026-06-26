#include <stdio.h>

int main() {
    int rows, i, j, space;
    int coef = 1;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    printf("\n--- Pascal's Triangle ---\n\n");

    for (i = 0; i < rows; i++) {
        // 1. Print leading spaces to make it look like a triangle
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        // 2. Calculate and print the numbers in the row
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1; // The first element of any row is always 1
            } else {
                coef = coef * (i - j + 1) / j; // Math formula to find the next coefficient
            }
            printf("%4d", coef);
        }
        
        // Move to the next line after completing a row
        printf("\n");
    }

    printf("\n-------------------------\n");
    return 0;
}