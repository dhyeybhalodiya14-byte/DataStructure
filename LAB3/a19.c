#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Assume the first element is both the smallest and largest initially
    int smallest = arr[0];
    int largest = arr[0];
    
    int smallest_pos = 1; // Position 1 corresponds to index 0
    int largest_pos = 1;

    // Loop through the array to find actual max, min, and their positions
    for(i = 1; i < n; i++) {
        // Check for largest
        if(arr[i] > largest) {
            largest = arr[i];
            largest_pos = i + 1; // Convert index to real-world position
        }
        
        // Check for smallest
        if(arr[i] < smallest) {
            smallest = arr[i];
            smallest_pos = i + 1; // Convert index to real-world position
        }
    }

    // Print results
    
    printf("Largest Number  : %d at Position : %d\n", largest, largest_pos);
    printf("Smallest Number : %d at Position : %d\n", smallest, smallest_pos);
    
    return 0;
}