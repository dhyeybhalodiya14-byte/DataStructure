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

    

}