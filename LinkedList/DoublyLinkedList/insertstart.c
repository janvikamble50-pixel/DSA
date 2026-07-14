#include<stdio.h>
#include<stdlib.h>
//Insert at beginning of Doubly Linked List

struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};

void display(struct Node*head){
    struct Node*ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    
}

struct Node*insertatstart(struct Node*head, int data){
    struct Node*p = (struct Node*)malloc(sizeof(struct Node));
    struct Node*ptr = head;
   p->data = data;
   p->next = head;
   p->prev = NULL;

   if(head != NULL)
     head->prev = p;
    return p;
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

    printf("before insetion\n");
    display(head);
    head = insertatstart(head, 5);
    printf("\nafter insretion\n");
    display(head);

    return 0;
}

