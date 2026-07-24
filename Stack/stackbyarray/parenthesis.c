#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct Stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    return 0;
}

int isFull(struct Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    return 0;
}

void push(struct Stack *ptr, char value)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

char pop(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        return '\0';
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int parenthesisMatch(char *exp)
{
    struct Stack *sp = (struct Stack *)malloc(sizeof(struct Stack));

    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    int i = 0;

    while (exp[i] != '\0')
    {
        if (exp[i] == '(')
        {
            push(sp, exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
        i++;
    }

    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char exp[100];

    printf("Enter an expression: ");
    scanf("%s", exp);

    if (parenthesisMatch(exp))
    {
        printf("Parentheses are Balanced.\n");
    }
    else
    {
        printf("Parentheses are Not Balanced.\n");
    }

    return 0;
}