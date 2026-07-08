#include<stdio.h>
#include<stdlib.h>
// deletion at the Beginning
struct Node
{
    int data;
    struct Node* next;
};

void traversal(struct Node*ptr){
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
       ptr = ptr->next;
    }
    
}

struct Node* deletefirst(struct Node* head){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
   
}

int main(int argc, char const *argv[])
{
  struct Node* head;
  struct Node* second;
  struct Node* third;
   
  head = (struct Node*) malloc(sizeof(struct Node));
  second = (struct Node*) malloc(sizeof(struct Node));
  third = (struct Node*) malloc(sizeof(struct Node));

  head-> data = 10;
  head->next = second;

  second-> data = 20;
  second->next = third;

  third-> data = 30;
  third-> next = NULL;

  traversal(head);
  printf("afer deletion at beginning\n");
  head = deletefirst(head);
  traversal(head);

    return 0;
}

