#include<stdio.h>
int main(){

    int n,m,i;

    printf("Enter value of n & m :- ");
    scanf("%d %d",&n,&m);

    int arr[n];

    for ( i = 0; i < n; i++)
    {
        printf("Enter number %d :- ",(i+1));
        scanf("%d",&arr[i]);
    }
    
    int sum = 0 ;

    for ( i = m-1 ; i < n; i++)
    {
        sum = sum + arr[i];
    }
    
    printf("Sum of numbers for %d to %d is :- %d",m,n,sum);

    return 0;

}