#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// palindrome linkes list

struct Node
{
    int data;
    struct Node* next;
};

void display(struct Node*head){
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

bool isPalindrome(struct Node* head) {

    if (head == NULL || head->next == NULL)
        return true;

    struct Node *slow = head;
    struct Node *fast = head;

    // Find the middle
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    struct Node *secondHalf = reverse(slow);
    struct Node *firstHalf = head;

    // Compare both halves
    while (secondHalf != NULL) {
        if (firstHalf->data != secondHalf->data)
            return false;

        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return true;
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

   printf("Linked List:\n");
    display(head);

    if (isPalindrome(head))
        printf("\nThe linked list is a Palindrome.\n");
    else
        printf("\nThe linked list is NOT a Palindrome.\n");

    return 0;
}
