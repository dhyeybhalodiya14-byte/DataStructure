#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *start, *end;
    int isPalindrome = 1;

    printf("Enter a word: ");
    scanf("%99s", str);

    start = str;
    end = str + strlen(str) - 1;

    while (start < end) {
        if (*start != *end) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        printf("Given word is Palindrome\n");
    } else {
        printf("Given word is Not palindrome\n");
    }

    return 0;
}