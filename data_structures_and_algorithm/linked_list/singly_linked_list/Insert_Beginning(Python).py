## Linked List: Insert at Beginning (Python)
## This code implements a simple singly linked list in Python with a function to insert nodes at the beginning.


class Node:                             ## Define a Node class for the linked list
    def __init__(self, data):
        self.data = data
        self.next = None

def insert_at_beginning(head, data):    ## Function to insert a new node at the beginning of the linked list
    new_node = Node(data)
    new_node.next = head
    return new_node

def print_list(head):                   ## Function to print the linked list
    while head:
        print(head.data, end=" -> ")
        head = head.next
    print("None") 

# Example usage

if __name__ == "__main__":
    head = None  # Start with an empty list

    # Inserting values at the beginning
    for value in [30, 20, 10]:  # Insert in reverse order
        head = insert_at_beginning(head, value)

    print("Linked List after insertions:")
    print_list(head)