# delete_by_value.py
# This code implements a function to delete a node by value in a singly linked list.
# It defines a Node class and provides functions to delete a node and print the list.
# The delete function traverses the list to find the node with the specified value and removes it
# while maintaining the integrity of the singly linked list structure.
# The print function displays the list in a readable format.

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def delete_node(head, key):
    if head is None:
        return None
    if head.data == key:
        return head.next
    prev, curr = None, head
    while curr and curr.data != key:
        prev = curr
        curr = curr.next
    if curr:
        prev.next = curr.next
    return head

def print_list(head):
    while head:
        print(head.data, end=" -> ")
        head = head.next
    print("None")

if __name__ == "__main__":
    head = Node(10)
    second = Node(20)
    third = Node(30)
    head.next = second
    second.next = third

    print("Original List:")
    print_list(head)
    head = delete_node(head, 20)
    print("After deleting 20:")
    print_list(head)
