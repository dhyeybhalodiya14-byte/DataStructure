#include<stdio.h>
int main(){

    int n,num1,num2,flag=0;

    printf("Enter size of array :- ");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d :- ",(i+1));
        scanf("%d",&arr[i]);
    }
    
    printf("Enter number from array :- ");
    scanf("%d",&num1);

    printf("Enter number u want to replace :- ");
    scanf("%d",&num2);

    for(int i = 0; i< n; i++){
        if(arr[i] == num1){
            arr[i] = num2 ;
        }
    }

    printf("Replaced array is :- ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}