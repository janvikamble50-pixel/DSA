#include<stdio.h>
#include<stdlib.h>
//how to make a Linkedlist
struct Node{
    int data;
    struct Node* next;   
};

void Traversal(struct Node*ptr){ //this is for tranversal
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr-> data);
        ptr = ptr-> next;
    }
    
}

int main( )
{
    struct Node* head;
    struct Node* second;
    struct Node* third;

   // Allocate memeory for nodes in the linkes list in _heap
   head = (struct Node*) malloc(sizeof(struct Node));
   second = (struct Node*) malloc(sizeof(struct Node));
   third = (struct Node*) malloc(sizeof(struct Node));

   /*                      this is a node
                _________________________________
               |               |                 |
               |               |                 |  
               |               |                 |
               |               |                 |
               |               |                 |
               -----------------------------------                                
                 data             pointer of next data
               
               */

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

    return 0;
}
