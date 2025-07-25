// insert_end.c
// This code defines a simple singly linked list in C and provides a function to insert a new node at the end of the list.
// It also includes a function to print the linked list for demonstration purposes. 

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insert_at_end(struct Node* head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL)
        return new_node;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new_node;
    return head;
}

void print_list(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    head = insert_at_end(head, 10);
    head = insert_at_end(head, 20);
    head = insert_at_end(head, 30);

    printf("Linked List after insertions:\n");
    print_list(head);
    return 0;
}
