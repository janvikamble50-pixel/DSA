#include<stdio.h>
#include<stdlib.h>
//peek operation

struct Node
{
    int data;
    struct Node* next;
};

//Pushing elements first
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

int peek(int pos, struct Node* top){
    struct Node*ptr = top;
    for (int i = 0; (i <pos- 1 && ptr != NULL) ; i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr-> data;
    }
    else{
        return -1;
    }
    
}

int main(int argc, char const *argv[])
{
    struct Node* top = NULL;
    top = push(top, 30);
    top = push(top, 40);
    top = push(top, 50);
    for (int i = 1; i < 4; i++)
    {
        printf("value at posirion %d is %d\n",i, peek(i, top));
    }
    
    return 0;
}

