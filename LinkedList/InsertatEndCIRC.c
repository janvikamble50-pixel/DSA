#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
};

void transversal(struct Node*head){
    struct Node*ptr = head;
    do
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node* insertatEnd(struct Node* head, int data){
    struct Node* ptr;
    ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node*p = head;

    while (p->next != head)
    {
        p = p->next;
    }
    ptr->next = head;
    p->next = ptr;

    return head;
}

int main(int argc, char const *argv[])
{

  struct Node* head;
  struct Node* second;
  struct Node* third;
  struct Node* fourth;

  head = (struct Node*) malloc(sizeof(struct Node));
  second = (struct Node*) malloc(sizeof(struct Node));
  third = (struct Node*) malloc(sizeof(struct Node));
  fourth = (struct Node*) malloc(sizeof(struct Node));

    head->data = 10;
    head->next=second;

    second-> data = 20;
    second-> next = third;

    third-> data = 30;
    third-> next = fourth;
    
    fourth-> data = 40;
    fourth-> next = head;

printf("BEFORE\n");
transversal(head);
printf("AFTER\n");
insertatEnd(head, 100);
transversal(head);


    return 0;
}
