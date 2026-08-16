#include<stdio.h>
#include<stdlib.h>
//reverse the stack

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

struct Node* display(struct Node* top){
    struct Node* ptr = top;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return ptr;
}

struct Node* reverse(struct Node* top){
    struct Node* prev = NULL;
    struct Node* current = top;
    struct Node* next;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    top = prev;
    return top;
}

int main(int argc, char const *argv[])
{
    struct Node* top = NULL;
    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    top = push(top, 40);
    top = push(top, 50);

    printf("\nbefore: ");
    display(top);
    
    top = reverse(top);

    printf("\nafter: ");
    display(top);
    return 0;
}