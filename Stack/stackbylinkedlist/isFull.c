#include<stdio.h>
#include<stdlib.h>
//check is the stack by linkedlist is full

struct Node
{
    int data;
    struct Node*next;
};

int isFull(struct Node*top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    return 0;
    
}

int main(int argc, char const *argv[])
{
    struct Node* top = NULL; //this means there is nothing in the stack yet
    
    if (isFull(top))
    {
        printf("stack is Full");
    }
    else{
        printf("stack underflow");
    }
    
    
    return 0;
}
