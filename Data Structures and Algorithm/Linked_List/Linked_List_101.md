# 📚 Linked Lists (with Python and C)

---

### 🔹 What is a Linked List?

A **linked list** is a linear data structure where elements (nodes) are stored in **non-contiguous memory** and are connected using **pointers**.

Each **node** contains:
1. Data
2. A reference/pointer to the next node

---

### 🔹 Why Use Linked Lists?

- Dynamic size (no need to predefine size like arrays)
- Easy insertion/deletion (especially in the middle)

---

### 🔹 Types of Linked Lists

1. **Singly Linked List** – Each node points to the next  
2. **Doubly Linked List** – Each node points to both next and previous  
3. **Circular Linked List** – Last node points to the head

---

## 🔸 Singly Linked List

### ✅ Node Structure

#### Python:
```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
```

#### C:
```c
struct Node {
    int data;
    struct Node* next;
};
```

---

### ✅ Operations

#### 1. Insert at Beginning

##### Python:
[Insert at Beginning](Linked List\Insert_Beginning(Python).py)


##### C:
[Insert at Beginning](Linked List\Insert_Beginning(C).c)

---

#### 2. Insert at End

##### Python:
```python
def insert_at_end(head, data):
    new_node = Node(data)
    if head is None:
        return new_node
    temp = head
    while temp.next:
        temp = temp.next
    temp.next = new_node
    return head
```

##### C:
```c
struct Node* insert_at_end(struct Node* head, int data) {
    struct Node* new_node = malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    if (head == NULL) return new_node;
    struct Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = new_node;
    return head;
}
```

---

#### 3. Deletion by Value

##### Python:
```python
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
```

##### C:
```c
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
```

---

#### 4. Display Linked List

##### Python:
```python
def print_list(head):
    while head:
        print(head.data, end=" -> ")
        head = head.next
    print("None")
```

##### C:
```c
void print_list(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
```

---

## 🔸 Summary Table

| Operation           | Time Complexity |
|---------------------|------------------|
| Insertion (Head)    | O(1)             |
| Insertion (Tail)    | O(n)             |
| Deletion by value   | O(n)             |
| Traversal           | O(n)             |

---

Would you like to continue with:
- 🔁 Doubly Linked List  
- 🔄 Circular Linked List  
- 💻 Practice Problems  
