#include<stdio.h>
#include<stdlib.h>
//find the middle element of a stack

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack*s){
    if (s->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack*s){
    if (s->top == s->size-1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack* s, int val){
    if (isFull(s))
    {
        printf("stack overflow");
    }
    else{
        s->top++;
        s->arr[s->top] = val;
    }
}

int middleelemnt(struct stack*s){
    if (isEmpty(s))
    {
        printf("empty");
    }

    int mid = s->top/2;
    return s->arr[mid];
    
    return 0;
}

int main(int argc, char const *argv[])
{
    struct stack s;
    s.size = 10;
    s.top = -1;
    s.arr = (int*)malloc(s.size* sizeof(int));

    push(&s,10);
    push(&s,20);
    push(&s,30);
    push(&s,40);
    push(&s,50);

    int element = middleelemnt(&s);

    printf("the middle element of the stack is %d", element);

    return 0;
}
