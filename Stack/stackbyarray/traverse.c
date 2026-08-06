#include<stdio.h>
#define MAX  5
//transverse the stack USING ARRAY

int stack[MAX];
int top = -1;

void traversal(){
    if (top == -1)
    {
        printf("Stack is empty\n");
    }

    printf("stack elements are:\n");

    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;
    stack[++top] = 40;
    stack[++top] = 50;
    traversal();
    return 0;
}
