# This code implements a function to delete a node by value in a doubly linked list.
# It defines a Node class and provides functions to delete a node and print the list.
# The code includes an example usage of the delete function.
# The delete function traverses the list to find the node with the specified value and removes it
# while maintaining the integrity of the doubly linked list structure.
# The print function displays the list in a readable format.
# The code is structured to be run as a standalone script for testing purposes.

class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

def delete_node(head, key):
    temp = head
    while temp:
        if temp.data == key:
            if temp.prev:
                temp.prev.next = temp.next
            else:
                head = temp.next
            if temp.next:
                temp.next.prev = temp.prev
            break
        temp = temp.next
    return head

def print_list(head):
    print("Doubly Linked List: ", end="")
    while head:
        print(head.data, end=" <-> ")
        head = head.next
    print("None")

if __name__ == "__main__":
    head = Node(10)
    second = Node(20)
    third = Node(30)
    head.next = second
    second.prev = head
    second.next = third
    third.prev = second

    print_list(head)
    head = delete_node(head, 20)
    print("After deleting 20:")
    print_list(head)
