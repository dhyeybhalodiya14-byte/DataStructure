#include <stdio.h>

int main() {
    int n, i, j;
    int has_duplicate = 0; // 0 means False, 1 means True

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Nested loop to check for duplicates
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            // If the current element matches any element ahead of it
            if(arr[i] == arr[j]) {
                has_duplicate = 1; // Duplicate found!
                break;             // Break the inner loop
            }
        }
        if(has_duplicate == 1) {
            break; // Break the outer loop since we already found a duplicate
        }
    }

    // Print the final result
    printf("\n---------------------------------------\n");
    if(has_duplicate == 1) {
        printf("Result: The array CONTAINS duplicate numbers.\n");
    } else {
        printf("Result: The array DOES NOT contain duplicate numbers.\n");
    }
    printf("---------------------------------------\n");

    return 0;
}