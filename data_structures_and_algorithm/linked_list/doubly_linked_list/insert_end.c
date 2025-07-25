// insert_end.c
// This code defines a simple doubly linked list in C and provides a function to insert a new node at the end of the list.
// It also includes a function to print the linked list for demonstration purposes.

#include <stdio.h>
#include <stdlib.h>

struct Node {                       // This structure defines a node in the doubly linked list.
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* insert_at_end(struct Node* head, int data) {                   // This function inserts a new node with the given data at the end of the list.
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL) {
        new_node->prev = NULL;
        return new_node;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new_node;
    new_node->prev = temp;

    return head;
}

void print_list(struct Node* head) {                // This function prints the linked list from head to tail.
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {            // Example usage of the doubly linked list.
    struct Node* head = NULL;
    head = insert_at_end(head, 10);
    head = insert_at_end(head, 20);
    head = insert_at_end(head, 30);
    print_list(head);
    return 0;
}
