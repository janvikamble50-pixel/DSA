#include<stdio.h>
#include<stdlib.h>
//isempty in circular queue

struct queue 
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue* q){
    if (q->f == -1)
    {
        return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    struct queue q;
    q.size = 10;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size* sizeof(int));

    if (isEmpty(&q))
    {
        printf("queue is empty");
    }
    else{
        printf("queue is not empty");
    }
    
    return 0;
}

