#include<stdio.h>
#include<stdlib.h>

//search in linkedlist

struct Node
{
    int data;
    struct Node*next;
};

int search(struct Node* head, int target){
    struct Node* ptr = head;
    int index = 0;
    while (ptr != NULL)
    {
        if (ptr-> data == target)
        {
            return index;
        }
        ptr = ptr->next;
        index++;
    }
    return -1;
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

  int target = 30;

   head->data = 10;
    head->next=second;

    second-> data = 20;
  second-> next = third;

  third-> data = 30;
  third-> next = fourth;

  fourth-> data = 40;
  fourth-> next = NULL;

  int n = search(head, target);
  if (n != -1)
    {
        printf("Target found at index %d\n", n);
    }
  else
    {
        printf("Target not found\n");
    }





    return 0;
}
