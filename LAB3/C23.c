#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;

    printf("Enter the number of names (N): ");
    scanf("%d", &n);
    
    // Clear the input buffer newline character left by scanf
    getchar(); 

    // Declare a 2D character array: n rows, each name can be up to 49 characters + '\0'
    char names[n][50];
    char temp[50];

    // 1. Input names
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        printf("Name %d: ", i + 1);
        // fgets is safer than scanf because it reads spaces in names
        fgets(names[i], sizeof(names[i]), stdin);
        
        // Remove the trailing newline character added by fgets
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    // 2. Bubble Sort Logic (Alphabetical Order)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // strcmp returns > 0 if names[j] comes after names[j+1] alphabetically
            if (strcmp(names[j], names[j + 1]) > 0) {
                // Swap the names using strcpy
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    // 3. Print the sorted names
    printf("\n--- Names in Alphabetical Order ---\n");
    for (i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }
    printf("-----------------------------------\n");

    return 0;
}