# CodeChum Data Structures and Algorithms Review Practices

This repository contains a collection of C programming exercises and solutions designed to review advanced data structures, Abstract Data Types (ADTs), and algorithms on CodeChum.

## Project Structure

The repository is organized into three main lessons, moving from linear data structures to hierarchical and network models:

### 📂 Lesson 1: Linear Data Structures & ADTs
Implementation of standard **Abstract Data Types (ADTs)** using sequential, linked, and simulated memory allocations:
* **ArrayList**: Sequential, array-based implementations of lists with dynamic resizing.
* **LinkedList**: Dynamic memory allocation using pointers for singly, doubly, or circular linked lists.
* **Cursor-Based Implementation**: Simulating memory allocation using an array of structures (virtual heaps) to manage links without actual pointers.
* **Stack**: Last-In, First-Out (LIFO) implementations (Array, Linked List, and Cursor-based).
* **Queue**: First-In, First-Out (FIFO) implementations, including circular queue variations.

### 📂 Lesson 2: Dictionaries, Maps, and Sets
Advanced collection types focusing on fast data retrieval and unique element storage:
* **Dictionary / Map Implementations**: Key-value pair storage mechanisms.
  * **Open Hashing**: Separate chaining using linked lists to resolve collisions.
  * **Close Hashing**: Open addressing strategies (Linear Probing, Quadratic Probing, Double Hashing).
  * **Cursor-Based Dictionary**: Hashing implementations utilizing a cursor-based memory arena.
* **Set Implementations**: Collections tracking unique elements.
  * **Tree Set**: Ordered set implementations utilizing balanced or binary search mechanics.
  * **Hash Set**: Unordered set implementations optimized for fast lookups using hashing functions.

### 📂 Lesson 3: Non-Linear Data Structures
Hierarchical and interconnected data models for complex data modeling:
* **Trees**: General tree structures, representations (Parent Pointer, List of Children), and traversal techniques (Pre-order, In-order, Post-order).
* **Binary Search Tree (BST)**: Specialized binary trees keeping elements sorted, supporting efficient insertion, deletion, and searching.
* **Graphs**: Network structures implemented using Adjacency Matrices and Adjacency Lists, including basic graph traversal algorithms (BFS and DFS).

## Getting Started

### Prerequisites

To compile and run these C programs locally, ensure you have a standard C compiler:
* **GCC** / **MinGW** / **Clang**

### Compilation and Execution

Navigate to the specific lesson and topic folder, then run the following commands in your terminal:

```bash
gcc -o program_name file_name.c
./program_name
```

## CodeChum Implementation Tips

* **Cursor-Based Headers**: Ensure your shared virtual heap (the array of nodes) is initialized correctly before executing operations for your Cursor-Based Lists or Dictionaries.
* **Memory Management**: For `LinkedList`, `BST`, and `Open Hashing`, remember to properly pass pointer-to-pointers (`Node**`) if you are modifying the head/root directly inside your functions.
* **Strict Formatting**: Match CodeChum's expected output perfectly. Extra spaces, missing trailing newlines (`\n`), or slight formatting variations in tree/graph printouts will trigger failed test cases.