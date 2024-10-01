# CS303 Assignment 2: Linked List and Vector Stack Implementation

## Files

- `LinkedList.h` and `LinkedList.cpp`: Implementation of the Single Linked List
- `VectorStack.h` and `VectorStack.cpp`: Implementation of the Vector-based Stack
- `Main.cpp`: Contains test functions for both data structures

## Compilation Instructions
Use compiler such as Visual Studios 2022 (preferred). Open sln file. Click run. 

## Functionality

### Single Linked List

The Single_Linked_List class provides the following operations:

- push_front: Add an element to the front of the list
- push_back: Add an element to the end of the list
- pop_front: Remove the first element
- pop_back: Remove the last element
- front: Get the first element
- back: Get the last element
- empty: Check if the list is empty
- insert: Insert an element at a specific index
- remove: Remove an element at a specific index
- find: Find the index of a specific element
- size: Get the number of elements in the list
- get: Get the element at a specific index

### Vector Stack

The VectorStack class provides the following operations:

- push: Add an element to the top of the stack
- pop: Remove the top element from the stack
- top: Get the top element of the stack
- empty: Check if the stack is empty
- size: Get the number of elements in the stack
- average: Calculate the average of all elements in the stack

### SAMPLE OUTPUT: 

- --- Testing Single_Linked_List ---
List after pushing 1, 2 to back and 0 to front:
0 1 2
After inserting 5 at index 2:
0 1 5 2
After removing element at index 1:
0 5 2
Front element: 0
Back element: 2
Size of list: 3
Is the list empty? No

--- Testing VectorStack ---
Is the stack empty? Yes
After pushing 10, size: 1
After pushing 20, size: 2
After pushing 30, size: 3
After pushing 40, size: 4
Stack size: 4
Top element: 40
Average of elements: 25
After popping, top element: 30
Is the stack empty? No
