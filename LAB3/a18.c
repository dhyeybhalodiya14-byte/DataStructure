#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    
    int arr[n];

    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

   
    average = sum / n;

    
    printf("\nThe average of the entered numbers is: %.2f\n", average);

    return 0;
}