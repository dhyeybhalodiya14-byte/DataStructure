#include<stdio.h>
int main(){

    int n,location;
    printf("enter size of array :- ");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d :- ",(i+1));
        scanf("%d",&arr[i]);
    }
    
    printf("Enter location for deletion :- ");
    scanf("%d",&location);
    
    for (int i = location-1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    
    printf("After deletion :- ");

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ",arr[i]);
    }
    
    

}