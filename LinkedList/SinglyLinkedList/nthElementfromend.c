#include<stdio.h>
#include<stdlib.h>

// Find Nth node from end

struct Node
{
    int data;
    struct Node*next;
};

     struct Node* nthFromEnd(struct Node* head, int n)
{
    struct Node* first = head;
    struct Node* second = head;

    for (int i = 0; i < n; i++)
    {
        if (first == NULL)
        {
            return NULL;
        }

        first = first->next;
    }

    while (first != NULL)
    {
        first = first->next;
        second = second->next;
    }

    return second;
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

  int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    struct Node *ans = nthFromEnd(head, n);

    if (ans != NULL)
    {
        printf("%dth node from the end is %d\n", n, ans->data);
    }
    else
    {
        printf("Invalid position\n");
    }
  



    return 0;
}
