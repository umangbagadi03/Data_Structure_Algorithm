# DSA in C++



## Linear data structure: 
Data structure in which data elements are arranged sequentially or linearly, where each element is attached to its previous and next adjacent elements, is called a linear data structure. 
Examples of linear data structures are array, stack, queue, linked list, etc.

##### Static data structure:
Static data structure has a fixed memory size. It is easier to access the elements in a static data structure. 
An example of this data structure is an array.

##### Dynamic data structure: 
In dynamic data structure, the size is not fixed. It can be randomly updated during the runtime which may be considered efficient concerning the memory (space) complexity of the code. 
Examples of this data structure are queue, stack, etc.

## Non-linear data structure: 
Data structures where data elements are not placed sequentially or linearly are called non-linear data structures. In a non-linear data structure, we can’t traverse all the elements in a single run only. 
Examples of non-linear data structures are trees and graphs.


# Data Structures and Algorithms (DSA)

This repository contains my implementations of various data structures and algorithms in C++ as a part of my study of DSA.

## Contents

- [Data Structures](#data-structures)
- [Algorithms](#algorithms)
- [References](#references)

## Data Structures

- Linked List
  - A linear data structure that consists of a set of nodes, where each node stores a reference to the next node in the list.
  - Supported operations: insertion, deletion, search, traversal.
  - Complexity:
    - Insertion: O(1)
    - Deletion: O(1) or O(n) depending on the location of the node
    - Search: O(n)
    - Traversal: O(n)
  - Code: [linked_list.cpp](src/linked_list.cpp)
  - Tests: [linked_list_test.cpp](tests/linked_list_test.cpp)
- Stack
  - A linear data structure that follows the last-in-first-out (LIFO) principle.
  - Supported operations: push, pop, peek, is_empty.
  - Complexity:
    - Push: O(1)
    - Pop: O(1)
    - Peek: O(1)
    - is_empty: O(1)
  - Code: [stack.cpp](src/stack.cpp)
  - Tests: [stack_test.cpp](tests/stack_test.cpp)

## Algorithms

- Binary Search
  - An algorithm that searches for a given element in a sorted array by repeatedly dividing the search interval in half.
  - Steps:
    1. Set the lower bound `low` and upper bound `high` of the search interval.
    2. Set the middle element `mid` of the search interval as `(low + high) / 2`.
    3. If `arr[mid]` is equal to the search element, return `mid`.
    4. If `arr[mid]` is less than the search element, set `low` to `mid + 1`.
    5. If `arr[mid]` is greater than the search element, set `high` to `mid - 1`.
    6. Repeat steps 2 to 5 until `low` is greater than `high`.
  - Complexity: O(log n)
  - Code: [binary_search.cpp](src/binary_search.cpp)
  - Tests: [binary_search_test.cpp](tests/binary_search_test.cpp)
- Bubble Sort
  - An algorithm that sorts an array by repeatedly comparing adjacent elements and swapping them if they are in the wrong order.
  - Steps:
    1. Set the flag `swapped` to `false`.
    2. Iterate through the array and for each pair of adjacent elements `(arr[i], arr[i + 1])`, do the following:
       1. If `arr[i] > arr[i + 1]`, swap them and set `swapped` to `true`.
    3. If `swapped` is `true`, go back to step 2. Otherwise, the array is sorted.
