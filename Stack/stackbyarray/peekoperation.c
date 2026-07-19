#include<stdio.h>
#include<stdlib.h>
//peek operation-> to know the value there is on the given index

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack*ptr){
    if (ptr-> top == ptr->size - 1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
//firs we pust some elements in the stack
int push(struct stack*ptr, int val){
    if (isFull(ptr))
    {
        printf("stack overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
    
}

int peek(struct stack*ptr, int i){
    int arrindex =ptr-> top - i + 1;
    if (arrindex < 0)
    {
        printf("invalid position given");
        return 0;
    }
    else{
        return ptr->arr[arrindex]; 
    }
}

int main(int argc, char const *argv[])
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr  = (int *)malloc(s->size* sizeof(int));
    push(s, 1);
    push(s,2);
    push(s, 3);
    push(s, 4);
    push(s, 10);

    for (int j = 1; j < s->top + 1; j++)
    {
        printf("\nthe value at %d id %d", j, peek(s, j));
    }
    


    return 0;
}
