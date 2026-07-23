#include<stdio.h>
#include<stdlib.h>
// Insert at index in Doubly Linked List

struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node*insertatIndex(struct Node*head, int index, int data){
    struct Node*p = (struct Node*)malloc(sizeof(struct Node));
    struct Node*ptr = head;
    while (ptr != index)
    {
        ptr = ptr->next;
    }
    p = ptr->next;
    p->data = data;
    
}

int main(int argc, char const *argv[])
{

   struct Node*head;
   struct Node*second;
   struct Node*third;
   struct Node*fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->prev = NULL;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = third;

    third->data = 30;
    third->prev = second;
    third->next = fourth;

    fourth->data = 40;
    fourth->prev = third;
    fourth->next = NULL;







    return 0;
}

