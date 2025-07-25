# insert_end.py
# This code implements a function to insert a node at the end of a singly linked list.
# It defines a Node class and provides functions to insert a node and print the list.
# The code includes an example usage of the insert function.
# The insert function traverses the list to find the end and appends the new node,
# maintaining the integrity of the singly linked list structure.
# The print function displays the list in a readable format.

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def insert_at_end(head, data):
    new_node = Node(data)
    if head is None:
        return new_node
    temp = head
    while temp.next:
        temp = temp.next
    temp.next = new_node
    return head

def print_list(head):
    while head:
        print(head.data, end=" -> ")
        head = head.next
    print("None")

if __name__ == "__main__":
    head = None
    for value in [10, 20, 30]:
        head = insert_at_end(head, value)
    print("Linked List after insertions:")
    print_list(head)
