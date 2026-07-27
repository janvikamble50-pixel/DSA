#include<stdio.h>
#include<stdlib.h>
//popping from the stack by linked list

struct Node
{
    int data;
    struct Node* next;
};

//THIS IS FOR PUSHING SOME ELEMENTS IN THE STACK
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
        return top;
    }
    else{
        struct Node* n = (struct Node*)malloc(sizeof(struct Node));
        n->data = val;
        n->next = top;
        top = n;
        return top;
    }
    
}

//THIS IS WHERE THE POPPING STARTS
int isEmpty(struct Node* top){
    if (top == NULL)
    {
        return 1;
    }
    return 0;   
}

int pop(struct Node** top){
   if (isEmpty(*top))
   {
    printf("the stack is enpty");
   }
   else{
    struct Node* n = *top;
    *top = (*top)->next;
    int x = n-> data;
    free(n);
    return x;
   }
   
}

void traversal(struct Node* ptr){
    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr-> next;
    }
    
}   

int main()
{
    struct Node* top = NULL;

    top = push(top, 30);
    top = push(top, 40);
    top = push(top, 50);

    printf("Before popping:\n");
    traversal(top);

    int element = pop(&top);

    printf("\nElement popped is %d\n", element);

    printf("After popping:\n");
    traversal(top);

    return 0;
}

