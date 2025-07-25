// This code is part of a simple doubly linked list implementation in C.
// It provides functions to print the list in both forward and backward directions.

#include <stdio.h>
#include <stdlib.h>

struct Node {                               // This structure defines a node in the doubly linked list.
    int data;
    struct Node* prev;
    struct Node* next;
};

void print_forward(struct Node* head) {     // This function prints the linked list from head to tail.
    printf("Forward: ");
    struct Node* last = NULL;
    while (head != NULL) {
        printf("%d <-> ", head->data);
        last = head;
        head = head->next;
    }
    printf("NULL\n");
}

void print_backward(struct Node* tail) {    // This function prints the linked list from tail to head.
    printf("Backward: ");
    while (tail != NULL) {
        printf("%d <-> ", tail->data);
        tail = tail->prev;
    }
    printf("NULL\n");
}

int main() {                                // Example usage of the doubly linked list.
    // Creating nodes and linking them
    struct Node *head, *second, *third;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10; head->prev = NULL; head->next = second;
    second->data = 20; second->prev = head; second->next = third;
    third->data = 30; third->prev = second; third->next = NULL;

    print_forward(head);
    print_backward(third);
    return 0;
}
