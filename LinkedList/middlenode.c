#include<stdio.h>
#include<stdlib.h>
//middle node of the list

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

struct Node* middleNode(struct Node* head) {

    struct Node *slow = head;
    struct Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
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

  printf("Linked List:\n");
    Traversal(head);

    struct Node *middle = middleNode(head);

    printf("\nMiddle Node = %d\n", middle->data);

    return 0;
}
