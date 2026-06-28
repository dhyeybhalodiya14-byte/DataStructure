#include <stdio.h>

int main() {
    int a[3][2], b[2][3];
    int mul[3][3];

    printf("Enter elements of 1st matrix (3x2):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Enter element at [%d][%d] :- ", (i + 1), (j + 1));
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of 2nd matrix (2x3):\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Enter element at [%d][%d] :- ", (i + 1), (j + 1));
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            mul[i][j] = 0;
            for(int k = 0; k < 2; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nMultiplication of both matrices (3x3):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}