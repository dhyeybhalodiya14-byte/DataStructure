#include <stdio.h>

int main() {
    int n, i, j;
    int has_duplicate = 0;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            
            if(arr[i] == arr[j]) {
                has_duplicate = 1; 
                break;             
            }
        }
        if(has_duplicate == 1) {
            break;
        }
    }

    
    if(has_duplicate == 1) {
        printf("Result: The array CONTAINS duplicate numbers.\n");
    } else {
        printf("Result: The array DOES NOT contain duplicate numbers.\n");
    }
    

    return 0;
}