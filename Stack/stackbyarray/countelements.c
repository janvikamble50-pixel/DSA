#include<stdio.h>
#include<stdlib.h>
//count the number of element sin the array

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

int count(struct stack*ptr){
    return ptr->top + 1; 
}

int main(int argc, char const *argv[])
{
    struct stack s;
    s.size = 5;
    s.top = -1;
    s.arr = (char *)malloc(s.size* sizeof(char));
    
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);

    printf("Number of elements = %d\n", count(&s));
        free(s.arr); //its ok if you dont write this its for saving space

    return 0;
}


