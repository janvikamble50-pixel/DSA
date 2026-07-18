#include<stdio.h>
#include<stdlib.h>
//pop operation in stack by array

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

int isEmpty(struct stack*ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack*ptr, int val){
    if (isFull(ptr))
    {
        printf("Stack overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr-> top] = val;
    }
    
}

int main(int argc, char const *argv[])
{
    struct stack*s;
    s->size = 2;
    s->top = -1;
    s->arr = (int* )malloc(s-> size* sizeof(int));

    //pushing an element first
    push(s, 15);

    //poping element from the stack
    if (isEmpty(s))
    {
        printf("the stack is empty");
    }
    else{
        int val = s->arr[s->top-1]; //we are storing the value that is popped 
        s->top = s->top-1;
        printf("element is popped");
    }
    

    return 0;
}

