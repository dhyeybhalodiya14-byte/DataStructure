#include<stdio.h>
int main(){

    int n;

    printf("enter n:- ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d :- ", (i + 1));
        scanf("%d", (p + i));
    }

    int max = *(p+0);

    for (int i = 0; i < n; i++)
    {
        if ( max < *(p+i) )
        {
            max = *(p+i);
        }
        
    }

    printf("Largest number from array is :- %d",max);
    

}