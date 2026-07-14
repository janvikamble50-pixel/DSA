#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
};

void Traversal(struct Node*ptr){
     while (ptr != NULL)
     {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
     }
     
}

struct Node* deleteatanIndex(struct Node* head, int index){
    struct Node*p = head;
    struct Node*q = head-> next;
     for (int i = 0; i < index - 1; i++)
     {
        p = p->next; //until p reaches the node before the one we want to delete
        q = q->next; //q reaches the node to be deleted.
     }

     p->next = q->next;
     return head;
     

}

int main(int argc, char const *argv[])
{
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;

  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));
  fourth = (struct Node*)malloc(sizeof(struct Node));

  head-> data = 10;
  head->next = second;

  second-> data = 20;
  second-> next = third;

  third-> data = 30;
  third-> next = fourth;

  fourth-> data = 40;
  fourth-> next = NULL;

  printf("before deletion at any node\n");
  Traversal(head);
  deleteatanIndex(head, 2);
  printf("after deletion at an index\n");
  Traversal(head);



    return 0;
}
