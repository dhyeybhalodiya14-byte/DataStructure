#include<stdlib.h>
#include<stdio.h>
int main(){

    int *i;
    char *c;
    float *f;

    i = (int *) malloc (sizeof(int));
    c = (char *) malloc (sizeof(char));
    f = (float *) malloc (sizeof(float));

    *i = 10;
    *c = 'd';
    *f = 10.59;

    printf("%d %c %f\n",*i,*c,*f);

    free(i);
    free(c);
    free(f);

}