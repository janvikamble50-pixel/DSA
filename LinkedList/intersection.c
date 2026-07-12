#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to find intersection
struct Node* getIntersectionNode(struct Node* headA, struct Node* headB) {
    struct Node *pA = headA;
    struct Node *pB = headB;

    while (pA != pB) {
        if (pA == NULL)
            pA = headB;
        else
            pA = pA->next;

        if (pB == NULL)
            pB = headA;
        else
            pB = pB->next;
    }

    return pA;
}

// Create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Display a linked list
void display(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {

    // Common part
    struct Node* common = createNode(8);
    common->next = createNode(4);
    common->next->next = createNode(5);

    // List A: 4 -> 1 -> 8 -> 4 -> 5
    struct Node* headA = createNode(4);
    headA->next = createNode(1);
    headA->next->next = common;

    // List B: 5 -> 6 -> 1 -> 8 -> 4 -> 5
    struct Node* headB = createNode(5);
    headB->next = createNode(6);
    headB->next->next = createNode(1);
    headB->next->next->next = common;

    printf("List A: ");
    display(headA);

    printf("List B: ");
    display(headB);

    struct Node* intersection = getIntersectionNode(headA, headB);

    if (intersection != NULL)
        printf("\nIntersection Node = %d\n", intersection->data);
    else
        printf("\nNo Intersection\n");

    return 0;
}