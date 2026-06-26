#include<stdio.h>
int main(){

    int fact=1;
    int n;

    printf("Enter number for factorial :- ");
    scanf("%d",&n);

    if (n<=1)
    {
        printf("Factorial of 1 & 0 is :- %d",fact);
    }
    else
    {
        
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i ;
        }
        
        printf("Factorial of given number is :- %d",fact);
        
    }
    

}