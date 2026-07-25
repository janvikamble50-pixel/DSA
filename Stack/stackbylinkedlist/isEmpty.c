#include<stdio.h>
#include<stdlib.h>
//check if stack is empty

struct Node
{
    int data;
    struct Node*next;
};

int isEmpty(struct Node* top){
    if (top == NULL)
    {
        return 1;
    }
    return 0;
    
}

int main(int argc, char const *argv[])
{
    struct Node* top = NULL;

    if (isEmpty(top))
    {
        printf("stack EMPTY");
    }
    else{
        printf("stack full");
    }
    
    return 0;
}

