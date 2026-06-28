#include<stdio.h>
int main(){

    int a[2][2] , b[2][2] , c[2][2];

    printf("Enter elements of first matrics :- \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter element at [%d][%d] :-",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("Enter elements of second matrics :- \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter element at [%d][%d] :-",(i+1),(j+1));
            scanf("%d",&b[i][j]);
        }
        
    }

    printf("Sum of matrics is :- \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
        
    }
    

}