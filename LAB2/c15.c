#include <stdio.h>

int main() {
    int temp, rem , sum, count;

    printf("Armstrong numbers between 1 and 1000 are: ");
    for (int i = 1; i <= 1000; i++) {
        temp = i;
        count = 0;
        while (temp != 0) {
            count++;
            temp = temp / 10;
        }

        temp = i;
        sum = 0;
        while (temp != 0) {
            rem  = temp % 10;
            
            int power = 1;
            for (int j = 1; j <= count; j++) {
                power = power * rem ;
            }
            
            sum = sum + power;
            temp = temp / 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}