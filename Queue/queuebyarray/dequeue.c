#include <stdio.h>
#include <stdlib.h>

//to delete an element - FIFO principle

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue Overflow\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("%d inserted\n", val);
    }
}

int dequeue(struct queue *q)
{
    int a = -1;

    if (isEmpty(q))
    {
        printf("Queue Underflow\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }

    return a;
}

int main()
{
    struct queue q;

    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // Enqueue elements
    enqueue(&q, 10);
    enqueue(&q, 20);

    // Dequeue
    printf("Deleted element = %d\n", dequeue(&q));

    // Enqueue again
    enqueue(&q, 45);

    printf("Deleted element = %d\n", dequeue(&q));
    printf("Deleted element = %d\n", dequeue(&q));

    free(q.arr);

    return 0;
}