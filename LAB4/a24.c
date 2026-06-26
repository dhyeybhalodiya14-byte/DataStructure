#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50}; 
    int size = 5; 
    int element = 25;
    int index = 2; 
    int i;

    if (size >= 10 || index < 0 || index > size) {
        printf("Error: Invalid operation.\n");
    } else {
        for (i = size; i > index; i--) {
            arr[i] = arr[i - 1];
        }

        arr[index] = element;
        size++;

        for(i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}