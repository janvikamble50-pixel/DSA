#include<stdio.h>
#include<stdlib.h>
//push operation in stack by array

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack*ptr){
    if (ptr->top == ptr-> size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

int main(int argc, char const *argv[])
{
    struct stack* s;
    s->size = 2;
    s-> top = -1;
    s->arr = (int* )malloc(s-> size* sizeof(int));
    //now we push an element in the stack
    if (isFull(s))
    {
        printf("\nStack overflow");
    }
    else{
        s->top++;
        s->arr[s-> top] = 15;
        printf("a value is pushed");
    }
    
    
    return 0;
}

