#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//infix to prefix

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

    char val = ptr->arr[ptr->top];
    ptr->top--;

    return val;
}

char stackTop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        return '\0';
    }

    return ptr->arr[ptr->top];
}

int precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }

    return 0;
}

void reverse(char *str)
{
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j)
    {
        char temp = str[i];

        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

char *infixToPostfix(char *infix)
{
    struct stack *sp;

    sp = (struct stack *)malloc(sizeof(struct stack));

    sp->size = 100;
    sp->top = -1;

    sp->arr = (char *)malloc(sp->size * sizeof(char));

    char *postfix =
        (char *)malloc((strlen(infix) + 1) * sizeof(char)); //make an array for postfix

    int i = 0;
    int j = 0;

    while (infix[i] != '\0')
    {
        // Ignore spaces
        if (infix[i] == ' ')
        {
            i++;
        }

        else if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];

            j++;
            i++;
        }

        else
        {
            if (isEmpty(sp))
            {
                push(sp, infix[i]);

                i++;
            }
            else if (precedence(infix[i]) >
                     precedence(stackTop(sp)))
            {
                push(sp, infix[i]);

                i++;
            }
            else
            {
                postfix[j] = pop(sp);

                j++;
            }
        }
    }

    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);

        j++;
    }

    postfix[j] = '\0';

    free(sp->arr);
    free(sp);

    return postfix;
}

char *infixToPrefix(char *infix)
{
    int length = strlen(infix);

    char *reversed =
        (char *)malloc((length + 1) * sizeof(char));

    strcpy(reversed, infix);

    reverse(reversed);

    struct stack *sp;

    sp = (struct stack *)malloc(sizeof(struct stack));

    sp->size = 100;
    sp->top = -1;

    sp->arr =
        (char *)malloc(sp->size * sizeof(char));

    char *postfix =
        (char *)malloc((length + 1) * sizeof(char));

    int i = 0;
    int j = 0;

    while (reversed[i] != '\0')
    {
        if (reversed[i] == ' ')
        {
            i++;
        }

        
        else if (!isOperator(reversed[i]))
        {
            postfix[j] = reversed[i];

            j++;
            i++;
        }

        else
        {
            if (isEmpty(sp))
            {
                push(sp, reversed[i]);

                i++;
            }
            else if (precedence(reversed[i]) >
                     precedence(stackTop(sp)))
            {
                push(sp, reversed[i]);

                i++;
            }
            else if (precedence(reversed[i]) ==
                     precedence(stackTop(sp)))
            {

                push(sp, reversed[i]);

                i++;
            }
            else
            {
                postfix[j] = pop(sp);

                j++;
            }
        }
    }

    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);

        j++;
    }

    postfix[j] = '\0';

    reverse(postfix);

    free(reversed);

    free(sp->arr);
    free(sp);

    return postfix;
}

int main()
{
    char *infix = "a - b + t / 6";

    char *prefix = infixToPrefix(infix);

    printf("Infix  : %s\n", infix);

    printf("Prefix : %s\n", prefix);

    free(prefix);

    return 0;
}