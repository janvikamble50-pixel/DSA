#include<stdio.h>
#include<stdlib.h>
//Search for an element in a linked-list stack.

struct Node
{
    int data;
    struct Node* next;
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
        printf("\nstack full");
    }
    else{
        struct Node* n = (struct Node*)malloc(sizeof(struct Node));
        n->data = val;
        n->next = top;
        top = n;
    }
    return top;
}

struct Node* searchElement(struct Node*top, int element, int *index){
    struct Node*ptr = top;
    while (ptr != NULL)
    {
        if (ptr->data == element)
        {
            return ptr;
        }
        ptr = ptr->next;
        (*index)++;
    }
    return NULL;
}

int main(int argc, char const *argv[])
{
    struct Node* top = NULL;
    int element = 50;
    int index = 0;
    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    top = push(top, 40);
    top = push(top, 50); 
    struct Node *result = searchElement(top, element, &index);

    if (result != NULL)
    {
        printf("\nelement %d found at %d index", element, index);
    }
    else{
        printf("\nelement %d not found");
    }
    
    return 0;
}

