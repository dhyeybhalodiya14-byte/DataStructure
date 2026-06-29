#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *start, *end;
    int flag = 1;

    printf("Enter a word: ");
    scanf("%s", str);

    start = str;
    end = str + strlen(str) - 1;

    while (start < end) {
        if (*start != *end) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if (flag == 1) {
        printf("Given word is Palindrome\n");
    } else {
        printf("Given word is Not palindrome\n");
    }

    return 0;
}