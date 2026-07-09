#include<stdio.h>
#include<stdlib.h>
// Reverse list

struct Node
{
    int data;
    struct Node* next;
};

void Traversal(struct Node*head){
    struct Node*ptr = head;
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr ->data);
        ptr = ptr->next;
    }
    
}

struct Node* reverse(struct Node*head){
  struct Node* prev = NULL;
  struct Node* current = head;
  struct Node* next = head ->next;
  while (current != NULL)
  {
   next = current->next;
   current-> next = prev;
   prev = current;
   current = next;
  }
  return prev;
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
  fourth-> next = NULL;

  printf("Before reversing\n");
  Traversal(head);
  head = reverse(head);
  printf("after reversing\n");
  Traversal(head);

    return 0;
}
