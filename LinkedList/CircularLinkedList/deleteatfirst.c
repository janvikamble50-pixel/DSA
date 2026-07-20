#include<stdio.h>
#include<stdlib.h>
//delete at start in a circular linked list

struct Node
{
    int data;
    struct Node* next;
};

void display(struct Node*head){
    struct Node* ptr= head;
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node* deleteatFirst(struct Node* head){
     struct Node *ptr = head;

    // Move ptr to the last node
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }

    // Last node points to second node
    ptr->next = head->next;

    struct Node *temp = head;
    head = head->next;

    free(temp);
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

    printf("before: ");
    display(head);
    head = deleteatFirst(head);
    printf("\nafter: ");
    display(head);

    return 0;
}
