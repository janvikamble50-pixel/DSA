#include<stdio.h>
#include<stdlib.h>
//delete the end node of the circular linked list

struct Node
{
    int data;
    struct Node*next;
};

void display(struct Node*head){
    struct Node* ptr= head;
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node* deleteatend(struct Node* head){
    struct Node*ptr = head;
    while (ptr->next->next != head) //tranverse to the second last node
    {
        ptr = ptr->next;
    }
    // Last node
    struct Node *temp = ptr->next;

    // Second last node points to head
    ptr->next = head;

    // Delete last node
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
    head = deleteatend(head);
    printf("\nafter: ");
    display(head);

    return 0;
}

