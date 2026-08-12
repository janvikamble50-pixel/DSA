#include<stdio.h>
#include<stdlib.h>
//isfull in circular queue

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue* q){
    if ((q-> r + 1)% q-> size == q-> f)
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
    q.arr = (int*)malloc(q.size*sizeof(int));

    if (isFull(&q))
    {
        printf("\nqueue is full");
    }
    else{
        printf("\nqueue is not full");
    }
    


}
