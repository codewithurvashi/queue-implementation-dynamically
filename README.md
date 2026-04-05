# 🔄 Circular Queue using Linked List (C++)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)
![Type](https://img.shields.io/badge/Data%20Structure-Circular%20Queue-green.svg)
![Status](https://img.shields.io/badge/Status-Complete-brightgreen.svg)
![License](https://img.shields.io/badge/License-MIT-yellow.svg)

---

## 📌 Overview

This project demonstrates the implementation of a **Circular Queue using a Singly Linked List in C++**.
The queue follows the **FIFO (First In First Out)** principle and maintains a circular link between nodes.

A fixed capacity (`MAX = 5`) is used to simulate overflow conditions.

---

## ✨ Features

✔️ Enqueue (Insert element)
✔️ Dequeue (Remove element)
✔️ Display queue elements
✔️ Peek (View front element)
✔️ Check if queue is empty
✔️ Check if queue is full

---

## 🧠 Concepts Used

* Circular Linked List
* Queue Data Structure (FIFO)
* Dynamic Memory Allocation
* Pointer Manipulation

---

## 🏗️ Project Structure

### 🔹 Node

* `data` → stores value
* `next` → pointer to next node

### 🔹 Queue

* `FRONT` → first element
* `REAR` → last element
* `size` → number of elements

---

## 🚀 Operations

### 🔸 Enqueue

Adds element at the rear
➡️ Shows **Overflow** if queue is full

### 🔸 Dequeue

Removes element from front
➡️ Shows **Underflow** if queue is empty

### 🔸 Display

Prints all elements in circular format

### 🔸 Peep

Displays the front element

### 🔸 ISempty / ISFULL

Checks queue status

---

## 🖥️ Menu Driven Interface

```
1. Enqueue
2. Display
3. Dequeue
4. Peep
5. ISempty
6. ISFULL
7. Exit
```

---

## ▶️ How to Run

### 🔧 Compile

```bash
g++ queue.cpp -o queue
```

### ▶️ Execute

```bash
./queue
```

---

## 📊 Sample Output

```
Enter the choice: 1
Enter value: 10
Inserted: 10

Enter the choice: 1
Enter value: 20
Inserted: 20

Enter the choice: 2
Queue Elements: 10,20

Enter the choice: 3
Deleted: 10
```

---

## ⚠️ Limitations

* Fixed size (`MAX = 5`)
* No exception handling
* Not thread-safe

---

## 📚 Learning Outcomes

* Implementation of circular queue
* Understanding pointer-based data structures
* Handling edge cases (overflow & underflow)

---

