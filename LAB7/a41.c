#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next ;
};

int main(){

    struct Node * newNode = NULL ;
    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf(" Empty Node ");
        return 1;
    }

    printf("Enter value of node :- ");
    scanf("%d",&newNode->data);

    newNode -> next = NULL ;

    printf("Data of Node :- %d\n",newNode->data);
    printf("Address of next Node :- %p\n",(void*)newNode->next);

    free(newNode);

    return 0;
    
}