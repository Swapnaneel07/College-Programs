## This code is part of a simple doubly linked list implementation in Python.
## It provides functions to insert nodes at the end and print the list.

class Node:                             ## Define a Node class for the doubly linked list    
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

def insert_at_end(head, data):          ## Function to insert a new node at the end of the doubly linked list
    new_node = Node(data)
    if head is None:
        return new_node
    temp = head
    while temp.next:
        temp = temp.next
    temp.next = new_node
    new_node.prev = temp
    return head

def print_list(head):                   ## Function to print the doubly linked list
    print("Doubly Linked List: ", end="")
    while head:
        print(head.data, end=" <-> ")
        head = head.next
    print("None")

if __name__ == "__main__":            ## Example usage of the doubly linked list
    head = None
    head = insert_at_end(head, 10)
    head = insert_at_end(head, 20)
    head = insert_at_end(head, 30)
    print_list(head)
