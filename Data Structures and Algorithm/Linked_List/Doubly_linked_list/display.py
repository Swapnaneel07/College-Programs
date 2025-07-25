### display.py
# This module provides functions to display a doubly linked list in both forward and backward directions.


class Node:                        # Define a Node class for the doubly linked list
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

def print_forward(head):            # Function to print the doubly linked list in forward direction
    print("Forward: ", end="")
    while head:
        print(head.data, end=" <-> ")
        last = head
        head = head.next
    print("None")

def print_backward(tail):       # Function to print the doubly linked list in backward direction
    print("Backward: ", end="")
    while tail:
        print(tail.data, end=" <-> ")
        tail = tail.prev
    print("None")

if __name__ == "__main__":      # Example usage of the display functions
    head = Node(10)
    second = Node(20)
    third = Node(30)
    head.next = second
    second.prev = head
    second.next = third
    third.prev = second

    print_forward(head)
    print_backward(third)
