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

1. **Singly Linked List** – [▶️  Singly Linked List](#Singly-Linked-List)  
2. **Doubly Linked List** – [▶️  Doubly Linked List](#Doubly-Linked-List)  
3. **Circular Linked List** – Last node points to the head



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

#### 🔹 Insert at Beginning (SLL)
- [Python Code](data_structures_and_algorithm/linked_list/singly_linked_list/Insert_Beginning(Python).py)
- [C Code](College-Programs/data_structures_and_algorithm/linked_list/singly_linked_list/Insert_Beginning(C).c)

#### 🔹 Insert at End (SLL)
- [Python Code](Linked_List\Singly_Linked_List\insert_end.py)
- [C Code](singly_linked_list/c/insert_end.c)

#### 🔹 Delete by Value (SLL)
- [Python Code](singly_linked_list/python/delete_by_value.py)
- [C Code](singly_linked_list/c/delete_by_value.c)

---

## 🔗 Doubly Linked List

Each node contains pointers to both the next and previous nodes.

### 🔹 Insert at End (DLL)
- [Python Code](Doubly_linked_list/python/insert_end.py)
- [C Code](Doubly_linked_list/c/insert_end.c)

### 🔹 Delete by Value (DLL)
- [Python Code](Doubly_linked_list/python/delete_by_value.py)
- [C Code](Doubly_linked_list/c/delete_by_value.c)

### 🔹 Display Forward and Backward (DLL)
- [Python Code](Doubly_linked_list/python/display.py)
- [C Code](Doubly_linked_list/c/display.c)

---

## 📝 Notes

- All examples are self-contained and include example input/output.
- You can run the C files using `gcc` and the Python files with `python3`.
