#include<stdio.h>
#include<stdlib.h>
//copy an stack inanother empty stack

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

void copyStack(struct stack* s1, struct stack* s2){
    s2->top = s1->top;

    for (int i = 0; i <= s1->top; i++)
    {
        s2->arr[i] = s1->arr[i];
    }
}

int main(int argc, char const *argv[])
{
    struct stack s1, s2;

    s1.size = 10;
    s1.top = -1;
    s1.arr = (int *)malloc(s1.size * sizeof(int));

    s2.size = 10;
    s2.top = -1;
    s2.arr = (int *)malloc(s2.size * sizeof(int));

    push(&s1,10);
    push(&s1,20);
    push(&s1,30);
    push(&s1,40);
    push(&s1,50);

    printf("\nbefore: ");
    display(&s1);

    copyStack(&s1, &s2);
    printf("\ncopied stack: ");
    display(&s2);
    return 0;
}
