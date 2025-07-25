// This code defines a simple linked list in C and provides a function to insert a new node at the beginning of the list.
// It also includes a function to print the linked list for demonstration purposes.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insert_at_beginning(struct Node* head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head;
    return new_node;
}

void print_list(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// ----------- Example Use Case -----------
int main() {
    struct Node* head = NULL;

    // Insert values at the beginning
    head = insert_at_beginning(head, 30);
    head = insert_at_beginning(head, 20);
    head = insert_at_beginning(head, 10);

    printf("Linked List after insertions:\n");
    print_list(head);

    return 0;
}
