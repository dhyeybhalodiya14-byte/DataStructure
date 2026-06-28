#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0];
    int largest = arr[0];
    
    int smallest_pos = 1;
    int largest_pos = 1;

    
    for(i = 1; i < n; i++) {
       
        if(arr[i] > largest) {
            largest = arr[i];
            largest_pos = i + 1;
        }
        
        
        if(arr[i] < smallest) {
            smallest = arr[i];
            smallest_pos = i + 1;
        }
    }

    
    printf("Largest Number  : %d at Position : %d\n", largest, largest_pos);
    printf("Smallest Number : %d at Position : %d\n", smallest, smallest_pos);
    
    return 0;
}