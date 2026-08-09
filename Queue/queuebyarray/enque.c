#include<stdio.h>
#include<stdlib.h>
//to insert at element - FIFO principle

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue*q){
    if (q->r == q->size-1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue* q, int val){
    if (isFull(q))
    {
        printf("this queue is full");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        printf("%d ", val);
    }    
}

int main(int argc, char const *argv[])
{
    struct queue q;
    q.size = 100;
    q.r = q.f = -1;
    q.arr = (int*)malloc(q.size*sizeof(int));

    //enqueue few elements
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    return 0;
}

