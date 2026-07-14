#include<stdio.h>
#include<stdlib.h>

//count the number for nodes

struct Node{
    int data;
    struct Node*next;
};

void Traversal(struct Node*head){
    struct Node*ptr = head;
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr ->data);
        ptr = ptr->next;
    }
    
}

int count(struct Node*head){
    int count = 0;
    struct Node*ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr -> next;
    }
    return count;
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

 Traversal(head);
 int n = count(head);
 printf("count = %d", n);
    return 0;
}


