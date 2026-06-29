#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    char branch[50];
    int batch_no;
};

int main() {
    struct Student s1;
    struct Student *p = &s1;

    p->roll_no = 101;
    strcpy(p->name, "Dhyey Bhalodiya");
    strcpy(p->branch, "Computer Science");
    p->batch_no = 2026;

    printf("Roll No :- %d\n", p->roll_no);
    printf("Name :- %s\n", p->name);
    printf("Branch :- %s\n", p->branch);
    printf("Batch No :- %d\n", p->batch_no);

    return 0;
}