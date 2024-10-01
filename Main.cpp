#include "LinkedList.h"
#include "VectorStack.h"
#include <iostream>

void testLinkedList() {
    std::cout << "\n--- Testing Single_Linked_List ---\n";
    Single_Linked_List list;

    list.push_back(1);
    list.push_back(2);
    list.push_front(0);
    std::cout << "List after pushing 1, 2 to back and 0 to front:\n";
    for (int i = 0; i < list.size(); ++i) {
        std::cout << list.get(i) << " ";
    }
    std::cout << "\n";

    list.insert(2, 5);
    std::cout << "After inserting 5 at index 2:\n";
    for (int i = 0; i < list.size(); ++i) {
        std::cout << list.get(i) << " ";
    }
    std::cout << "\n";

    list.remove(1);
    std::cout << "After removing element at index 1:\n";
    for (int i = 0; i < list.size(); ++i) {
        std::cout << list.get(i) << " ";
    }
    std::cout << "\n";

    std::cout << "Front element: " << list.front() << std::endl;
    std::cout << "Back element: " << list.back() << std::endl;
    std::cout << "Size of list: " << list.size() << std::endl;
    std::cout << "Is the list empty? " << (list.empty() ? "Yes" : "No") << std::endl;
}

void testVectorStack() {
    std::cout << "\n--- Testing VectorStack ---\n";
    VectorStack stack;

    std::cout << "Is the stack empty? " << (stack.empty() ? "Yes" : "No") << std::endl;

    stack.push(10);
    std::cout << "After pushing 10, size: " << stack.size() << std::endl;
    stack.push(20);
    std::cout << "After pushing 20, size: " << stack.size() << std::endl;
    stack.push(30);
    std::cout << "After pushing 30, size: " << stack.size() << std::endl;
    stack.push(40);
    std::cout << "After pushing 40, size: " << stack.size() << std::endl;

    std::cout << "Stack size: " << stack.size() << std::endl;
    std::cout << "Top element: " << stack.top() << std::endl;
    std::cout << "Average of elements: " << stack.average() << std::endl;

    stack.pop();
    std::cout << "After popping, top element: " << stack.top() << std::endl;
    std::cout << "Is the stack empty? " << (stack.empty() ? "Yes" : "No") << std::endl;
}

int main() {
    testLinkedList();
    testVectorStack();
    return 0;
}