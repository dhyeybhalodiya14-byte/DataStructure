#include <stdio.h>

int main() {
    int n, currentSum = 0, totalSum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        currentSum = currentSum + i;
        totalSum = totalSum + currentSum;
    }

    printf("Total sum: %d\n", totalSum);
    return 0;
}