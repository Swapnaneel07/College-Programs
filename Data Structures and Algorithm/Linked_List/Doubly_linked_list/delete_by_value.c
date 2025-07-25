// delete_by_value.c
// This code defines a function to delete a node by value in a doubly linked list.
// It also includes a function to print the linked list for demonstration purposes.

#include <stdio.h>
#include <stdlib.h>

struct Node {           // This structure defines a node in the doubly linked list.
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* delete_node(struct Node* head, int key) {          // This function deletes the first node with the specified value from the doubly linked list.
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            if (temp->prev)
                temp->prev->next = temp->next;
            else
                head = temp->next;
            if (temp->next)
                temp->next->prev = temp->prev;
            free(temp);
            break;
        }
        temp = temp->next;
    }
    return head;
}

void print_list(struct Node* head) {                    // This function prints the linked list from head to tail.
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {        // Example usage of the doubly linked list with delete functionality.
    struct Node *head, *second, *third;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10; head->prev = NULL; head->next = second;
    second->data = 20; second->prev = head; second->next = third;
    third->data = 30; third->prev = second; third->next = NULL;

    print_list(head);
    head = delete_node(head, 20);
    printf("After deleting 20:\n");
    print_list(head);
    return 0;
}
