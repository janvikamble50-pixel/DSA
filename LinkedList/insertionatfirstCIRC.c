#include<stdio.h>
#include<stdlib.h>

//insertion at first in circular linked list

struct Node
{
    int data;
    struct Node*next;
};

void Traversal(struct Node*head){
    struct Node* ptr = head; //head is a node and ptr is a pointer
    do //we used do while because want atleast once for the program to runand teh it cal keep on traversing
    {
        printf("Element: %d\n", ptr->data);
            ptr = ptr-> next;
    } while (ptr != head);
    

} 

 struct Node* Insertatfirst(struct Node*head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node*p = head-> next;
    while (p !=head)
    {
        p = p->next;
    }
    //At this point p points the last node of this circular list

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
 }                       


int main(int argc, char const *argv[])
{
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;

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

 Traversal(head);
head = Insertatfirst(head, 100);
Traversal(head);
    return 0;
}
