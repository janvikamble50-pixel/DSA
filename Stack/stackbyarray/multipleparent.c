#include <stdio.h>
#include <stdlib.h>

// multiple parentheses

struct stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    return 0;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    return 0;
}

void push(struct stack *ptr, char value)
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

char pop(struct stack *ptr)
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

int multiplaeParenthesis(char *exp)
{
    // create and initialize the stack

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));

    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    char popped_ch;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        // Opening parentheses
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(sp, exp[i]);
        }

        // Closing parentheses
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isEmpty(sp))
            {
                return 0;
            }

            popped_ch = pop(sp);

            if (exp[i] == ')' && popped_ch != '(')
            {
                return 0;
            }

            if (exp[i] == '}' && popped_ch != '{')
            {
                return 0;
            }

            if (exp[i] == ']' && popped_ch != '[')
            {
                return 0;
            }
        }
    }

    if (isEmpty(sp))
    {
        return 1;
    }

    return 0;
}

int main()
{
    char exp[100];

    printf("Enter expression: ");
    scanf("%s", exp);

    if (multiplaeParenthesis(exp))
    {
        printf("Parentheses are balanced\n");
    }
    else
    {
        printf("Parentheses are not balanced\n");
    }

    return 0;
}