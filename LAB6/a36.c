#include<stdio.h>
int main(){

    int n,a=1;

    printf("Enter n :- ");
    scanf("%d",&n);

    int *p = &a;
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + *p;
        (*p)++;
    }
    
    printf("Sum of first %d number is :- %d",n,sum);

}