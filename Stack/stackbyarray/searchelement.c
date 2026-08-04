#include<stdio.h>
#include<stdlib.h>
//Search for an element in a stack.

struct stack
{
    int size;
    int top;
    int *arr;
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

int push(struct stack* ptr, int val){
    if(isFull(ptr)){
        printf("stack overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int searchElement(struct stack*ptr, int elemnt){
    if (isEmpty(ptr))
    {
        printf("stack is empty");
    }

    for (int i = 0; i <= ptr->top; i++)
    {
        if (ptr->arr[i] == elemnt)
        {
            return i;
        }
    }
    return -1;
    
}

int main(int argc, char const *argv[])
{
    struct stack s;
    s.size = 100;
    s.top = -1;
    s.arr = (int*)malloc(s.size* sizeof(int));

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);

    int elemnt;

    printf("enter the element to be searched: ");
    scanf("%d" ,&elemnt);

    int index = searchElement(&s, elemnt);

    if (index == -1)
    {
        printf("element is not present in the stack");
    }
    else{
        printf("%d found at index %d", elemnt, index);
    }
    
    return 0;
}
