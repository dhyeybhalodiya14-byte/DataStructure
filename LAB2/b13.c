#include <stdio.h>

int main() {
    int a, b, isPrime;

    printf("Enter a:- ");
    scanf("%d", &a);
    printf("Enter b:- ");
    scanf("%d", &b);

    printf("Prime numbers between %d and %d are: ", a, b);
    for (int i = a; i <= b; i++) {
        if (i <= 1) {
            continue;
        }
        
        isPrime = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}