#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

bool isEmpty(struct stack* ptr){
    if (ptr->top == -1)
    {
        return true;
    }
    else{
        return false;
    }
    
}

bool isFull(struct stack* ptr){
    if (ptr->top == ptr->size-1)
    {
        return true;
    }
    else{
        return false;
    }
    
}

int main(int argc, char const *argv[])
{
    struct stack *s;
    s->size = 5;
    s->top = -1; //bcoz till now it is not pointing to any element
    s->arr = (int*)malloc(s->size * sizeof(int));

    //manually pushing an element 
    s->arr[0] = 1;
    s->top++;

    if (isEmpty(s))
    {
        printf("\nis emply");
    }
    else{
        printf("\nis not empty");
    }

    if (isFull(s))
    {
        printf("\nis full");
    }
    else{
        printf("\nis not full");
    }
    
    
    return 0;
}
