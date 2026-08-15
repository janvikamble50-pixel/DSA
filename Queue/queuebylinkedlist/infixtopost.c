#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

char stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}

int precedence(char ch){
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else{
        return 0;
    }
}

int operator(char ch){
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else
    return 0;
    
}
char* infixTOpostfix(char* infix){
    struct stack* sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char*) malloc(sp->size* sizeof(char));
    char* postfix = (char*) malloc((strlen(infix) + 1)* sizeof(char));
    int i = 0; //track infix traversal
    int j = 0; // track postfix traversal

    while (infix[i] != '\0')
    {
        if (!operator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++; 
        }
        else{
            if (precedence(infix[i])> precedence(stackTop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else{
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
    return postfix;
    
}

int main(int argc, char const *argv[])
{
    char * infix = "a - b + t / 6";
    printf("Postfix is %s", infixTOpostfix(infix));
    return 0;
}
