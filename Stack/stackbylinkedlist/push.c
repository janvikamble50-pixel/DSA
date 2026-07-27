#include<stdio.h>
#include<stdlib.h>
//push in stack by linkedlist

struct Node
{
    int data;
    struct Node* next;
};

//PUSHING ELEMENTS 
int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}

struct Node* push(struct Node*top, int val){
    if (isFull(top))
    {
        printf("stack overflow");
    }
    else{
        struct Node* n = (struct Node*)malloc(sizeof(struct Node));
        n->data = val;
        n->next = top;
        top = n;
        return top;
    }
    
}

void traversal(struct Node* ptr){
    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr-> next;
    }
    
}

int main(int argc, char const *argv[])
{
    struct Node* top = NULL;
    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    top = push(top, 40);
    top = push(top, 50);
    traversal(top);

    return 0;  
}

