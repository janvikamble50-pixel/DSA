#include<stdio.h>
#include<stdlib.h>
//minimum of the elements in the stack

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack*ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack*ptr){
    if (ptr-> top == ptr->size-1)
    {
        return 1;
    }
    return 0;
}

int push(struct stack*ptr, int val){
    if (isFull(ptr))
    {
        printf("stack overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
    
}

int mini(struct stack* ptr){
    if (isEmpty(ptr))
    {
        printf("stack is empty\n");
    }

    int min = ptr->arr[0];

    for (int i = 1; i <= ptr->top; i++)
    {
        if (ptr->arr[i] < min)
        {
            min = ptr->arr[i];
        }
        
    }
    
    return min;
}

int main(int argc, char const *argv[])
{
    struct stack s;
    s.size = 10;
    s.top = -1;
    s.arr = (int*)malloc(s.size* sizeof(int));

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);

    printf("Minimum is: %d", mini(&s));

    return 0;
}

