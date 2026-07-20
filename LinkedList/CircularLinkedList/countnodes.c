#include<stdio.h>
#include<stdlib.h>
//count the number of nodes
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

int countnodes(struct Node*head){
    int count = 1;
    struct Node *ptr = head->next;

    while (ptr != head)
    {
        count++;
        ptr = ptr->next;
    }

    return count;
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
    printf("\nthe number of nodes is %d", countnodes(head));

    return 0;
}
