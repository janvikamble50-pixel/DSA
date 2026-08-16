#include<stdio.h>
#include<stdlib.h>
//Display a linked-list stack. 

struct Node
{
    int data;
    struct Node*next;
};

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
        printf("stack full");
    }
    else{
        struct Node* n = (struct Node*)malloc(sizeof(struct Node));
        n->data = val;
        n->next = top;
        top = n;
    }
    return top;
}

struct Node* display(struct Node* top){
    struct Node* ptr = top;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return ptr;
}

int main(int argc, char const *argv[])
{
    struct Node* top = NULL;
    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    display(top);

    return 0;
}

