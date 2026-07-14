#include<stdio.h>
#include<stdlib.h>
 
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
    
    return 0;
}

