#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Traversal(struct Node*ptr){
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr-> data);
        ptr = ptr-> next;
    }
    
}

struct Node *insertAtfirst(struct Node*head, int data){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node)); //New node called ptr is made 
    ptr-> next =  head;
    ptr-> data = data;
    return ptr;
}


int main(int argc, char const *argv[])
{
    struct Node* head;
    struct Node* second;
    struct Node* third;

   // Allocate memeory for nodes in the linkes list in _heap
   head = (struct Node*) malloc(sizeof(struct Node));
   second = (struct Node*) malloc(sizeof(struct Node));
   third = (struct Node*) malloc(sizeof(struct Node));

   //Link the first and second nodes
   head ->data = 10;
   head-> next = second;

   //Link second and third nodes
   second-> data = 20;
   second-> next = third;

   //terminate the list at the third node
   third-> data= 30;
   third-> next = NULL;

   Traversal(head);
   head = insertAtfirst(head, 100);
   Traversal(head);


    return 0;
}
