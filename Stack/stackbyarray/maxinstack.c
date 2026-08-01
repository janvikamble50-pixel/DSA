#include<stdio.h>
#include<stdlib.h>
//maximum element in the stack 

struct stack
{
    int size;
    int top;
    char *arr;
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

int maxInStack(struct stack* ptr){
    if (isEmpty(ptr))
    {
        printf("stack is empty\n");
    }
     int max = ptr->arr[0];

     for (int i = 1; i <= ptr->top ; i++) //for traversing the stack
     {
        if (ptr->arr[i] > max)
        {
            max = ptr-> arr[i];
        }
        
     }
     return max;
}

int main(int argc, char const *argv[])
{
    struct stack s;
    s.size = 10;
    s.top = -1;
    s.arr = (char*)malloc(s.size* sizeof(char));

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);

    printf("Maximum is %d", maxInStack(&s));

    return 0;
}
