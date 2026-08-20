#include<stdio.h>
#include<stdlib.h>
//Count elements in a linked-list stack.

struct Node
{
    int data;
    struct Node* next;
};

int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}

struct Node* push(struct Node*top, int val){
    if (isFull(top))
    {
        printf("\nstack full");
    }
    else{
        struct Node* n = (struct Node*)malloc(sizeof(struct Node));
        n->data = val;
        n->next = top;
        top = n;
    }
    return top;
}

int countelements(struct Node* top){
    struct Node* ptr = top;
    int count = 0;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        count++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    struct Node* top = NULL;
    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    top = push(top, 40);
    top = push(top, 50);

    int number = countelements(top);
    printf("the number of elements is %d", number);
    return 0;
}
