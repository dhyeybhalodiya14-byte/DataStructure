#include<stdio.h>
int main(){

    int n ;
    
    printf("Enter size of array :- ");
    scanf("%d",&n);

    int arr[n+1];

    for (int i = 0; i < (n); i++)
    {
        printf("Enter element %d :- ",(i+1));
        scanf("%d",&arr[i]);
    }

    int element,location;

    printf("Enter element u want to add in this array :- ");
    scanf("%d",&element);
    
    printf("Enter location :- ");
    scanf("%d",&location);

    for (int i = n; i > location; i--)
    {
        arr[i] = arr[i - 1] ; 
        
    }
    
    arr[location] = element ;

    for (int i = 0; i < (n+1); i++)
    {
        printf("%d ",arr[i]);
    }
    

}