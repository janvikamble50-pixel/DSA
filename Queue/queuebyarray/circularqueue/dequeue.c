#include<stdio.h>
#include<stdlib.h>
//dequeue the circular queue

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

void display(struct queue* q){
    int i = q->f;
    while (1)
    {
        printf("%d ", q->arr[i]);

        if (i == q->r)
        {
            break;
        }
        i = (i + 1)% q->size;
    }
}

int isFull(struct queue* q){
    if ((q-> r + 1)% q-> size == q-> f)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct queue* q){
    if (q->f = -1)
    {
        return 1;
    }
    return 0;
}

int enqueue(struct queue* q, int val){
    if (isFull(q))
    {
        printf("queue is full");
    }
    else{
        if (q->f == -1)
        {
            q-> f = 0;
        }
        q->r = (q-> r+1)%q-> size;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue* q){
    if (isEmpty(q))
    {
        printf("queue is empty");
    }
    else{

        printf("\ndeleted element: %d", q->arr[q->f]);

        if (q->f == q->r)
        {
            q->f = q->r = -1;
        }
        else{
            q->f = (q->f + 1)% q->size;
        }
    }    
}

int main(int argc, char const *argv[])
{
    struct queue q;
    q.size = 10;
    q.r = q.f = -1;
    q.arr = (int *)malloc(q.size* sizeof(int));

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);
    dequeue(&q);
    display(&q);
    return 0;
}

