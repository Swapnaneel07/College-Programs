# 📚 Linked Lists

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

1. **Singly Linked List** – [▶️  Singly Linked List](README.md#-singly-linked-list)  
2. **Doubly Linked List** – [▶️  Doubly Linked List](README.md#-doubly-linked-list)  
3. **Circular Linked List** – Last node points to the head



## 🔸 Singly Linked List

A **Singly Linked List (SLL)** is a linear data structure where **each node points only to the next node** in the sequence.

---

### 🔹 Structure of a Singly Linked List Node

Each node has two parts:

1. **Data** – the actual value stored  
2. **Next** – a pointer to the **next** node in the list

---

### ➡️ Visual Representation

```
[10] -> [20] -> [30] -> NULL
```

- The list starts at the **head** (10)  
- The last node points to `NULL` (end of the list)  
- You can **only move forward**

---

### ✅ Advantages

- Simple and efficient for **forward traversal**
- Uses **less memory** (one pointer per node)
- Easy to implement

---

### ❌ Disadvantages

- Cannot traverse backward
- Deleting a node requires tracking the **previous node**
- Not efficient for **reverse operations**

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

#### 🔹 Insert at Beginning (SLL)
- [Python Code](singly_linked_list/Insert_Beginning(Python).py)
- [C Code](singly_linked_list/Insert_Beginning(C).c)

#### 🔹 Insert at End (SLL)
- [Python Code](singly_linked_list/insert_end.py)
- [C Code](singly_linked_list/insert_end.c)

#### 🔹 Delete by Value (SLL)
- [Python Code](singly_linked_list/delete_by_value.py)
- [C Code](singly_linked_list/c/delete_by_value.c)

---

## 🔗 Doubly Linked List

A Doubly Linked List (DLL) is a type of linked list where each node contains three parts:
1. **Data** – the actual value stored
2. **Prev** – a pointer to the previous node
3. **Next** – a pointer to the next node

### 🔁 Visual Representation:
```
NULL <- [10] <-> [20] <-> [30] -> NULL
```
-10 is the head node; its prev is NULL
-30 is the tail node; its next is NULL

Each node connects to both its previous and next nodes

---

### ✅ Advantages:
Can be traversed in both directions

Deletion is easier (no need to track the previous node separately)

Efficient for backward iteration

---

### ❌ Disadvantages:
Uses more memory (extra pointer)

Slightly more complex to implement than singly linked lists

---

### 🔹 Node Structure of Doubly Linked List

#### 🐍 Python

```python
class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None
```

---

#### 💻 C

```c
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
```

---

### ✅ Operations
### 🔹 Insert at End (DLL)
- [Python Code](doubly_linked_list/insert_end.py)
- [C Code](doubly_linked_list/insert_end.c)

### 🔹 Delete by Value (DLL)
- [Python Code](doubly_linked_list/delete_by_value.py)
- [C Code](doubly_linked_list/delete_by_value.c)

### 🔹 Display Forward and Backward (DLL)
- [Python Code](doubly_linked_list/display.py)
- [C Code](doubly_linked_list/display.c)

---

## 📝 Notes

- All examples are self-contained and include example input/output.
- You can run the C files using `gcc` and the Python files with `python3`.
