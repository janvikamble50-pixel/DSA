#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Check whether a string is a palindrome using a stack.

struct stack
{
    int size;
    int top;
    char arr[100];
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, char val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow\n");
        return '\0';
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

void reverseString(struct stack *s, char str[])
{
    // Push all characters into the stack
    for (int i = 0; str[i] != '\0'; i++)
    {
        push(s, str[i]);
    }

    // Pop characters back into the string
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = pop(s);
    }
}

int main()
{
    struct stack s;
    s.size = 100;
    s.top = -1;

    char str[100];
    char rev[100];

    printf("Enter a string: ");
    scanf("%s", str);

    strcpy(rev, str);

    reverseString(&s, rev);

    if (strcmp(str, rev) == 0)
    {
        printf("'%s' is a palindrome.\n", str);
    }
    else
    {
        printf("'%s' is not a palindrome.\n", str);
    }

    return 0;
}