#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    // Ask user for the total number of elements
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Take inputs from the user and store them in the array
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Loop through the array to calculate the total sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate average 
    average = sum / n;

    // Display the result (.2f prints the average up to 2 decimal places)
    printf("\nThe average of the entered numbers is: %.2f\n", average);

    return 0;
}