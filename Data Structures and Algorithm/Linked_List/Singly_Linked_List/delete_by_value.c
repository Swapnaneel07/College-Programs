// delete_by_value.c
// This code defines a function to delete a node by value in a singly linked list.
// It also includes a function to print the linked list for demonstration purposes. 

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* delete_node(struct Node* head, int key) {
    if (head == NULL) return NULL;

    if (head->data == key) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node *curr = head, *prev = NULL;
    while (curr != NULL && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }

    if (curr != NULL) {
        prev->next = curr->next;
        free(curr);
    }

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
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));

    head->data = 10; head->next = second;
    second->data = 20; second->next = third;
    third->data = 30; third->next = NULL;

    printf("Original List:\n");
    print_list(head);

    head = delete_node(head, 20);

    printf("After deleting 20:\n");
    print_list(head);

    return 0;
}
