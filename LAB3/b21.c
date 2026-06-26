#include <stdio.h>

int main() {
    int n, i;
    int target, replacement;
    int found = 0;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int arr[n];

    // 1. Input elements into the array
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 2. Read the two different numbers
    printf("\nEnter the number you want to replace (1st number): ");
    scanf("%d", &target);
    printf("Enter the new number to put in its place (2nd number): ");
    scanf("%d", &replacement);

    printf("\n--- Replacement Log ---\n");

    // 3. Search and replace logic
    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            // Print the index where it was found (using real-world 1-based position)
            printf("Found '%d' at Position %d. Replacing with '%d'.\n", target, i + 1, replacement);
            arr[i] = replacement; // Perform the replacement
            found = 1;
        }
    }

    if(found == 0) {
        printf("The number %d was not found in the array. No changes made.\n", target);
    }

    // 4. Print the final updated array
    printf("\n--- Final Array ---\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n-------------------\n");

    return 0;
}