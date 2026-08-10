#include<stdio.h>
#include<stdlib.h>
//delete middle element

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

void display(struct stack*s){
    if (isEmpty(s))
    {
        printf("stack is empty\n");
        return;
    }

    for (int i = 0; i <= s->top; i++)
    {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

int middleelement(struct stack *s){
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
        return -1;
    }

    int mid = s->top / 2;
    return s->arr[mid];
}

void deletemiddle(struct stack *s){
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
        return;
    }

    int mid = s->top / 2;

    for (int i = mid; i < s->top; i++)
    {
        s->arr[i] = s->arr[i + 1];
    }

    s->top--;
}

int main(int argc, char const *argv[])
{
    struct stack s;
    s.size = 100;
    s.top = -1;
    s.arr = (int*)malloc(s.size* sizeof(int));

    return 0;
}
