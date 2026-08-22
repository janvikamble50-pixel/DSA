#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Reverse a string using a stack.

struct stack
{
    int size;
    int top;
    char arr[100];
};
 
int isEmpty(struct stack*ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack*ptr){
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack* ptr, int val){
    if(isFull(ptr)){
        printf("stack overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
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



int main(int argc, char const *argv[])
{
    struct stack s;                
    s.size = 100;
    s.top = -1;

    char str[100];

    printf("enter a charcter: ");
    scanf("%s", &str);

    //pushing characters onto he stac
    for (int i = 0; str[i] != '\0'; i++)
    {
        push(&s, str[i]);
    }

    //pop characters back into the string
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = pop(&s);
    }

    printf("reversed string is: %s", str);
    
    
    return 0;
}
