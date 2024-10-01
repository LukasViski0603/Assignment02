// SingleLinkedList.cpp
#include "LinkedList.h"
#include <stdexcept>

// Constructor -  Initializes an empty list
Single_Linked_List::Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {}

// Destructor -  Deallocates all nodes
Single_Linked_List::~Single_Linked_List() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// adds new element to beginning of list
void Single_Linked_List::push_front(int item) {
    Node* new_node = new Node(item);
    new_node->next = head;
    head = new_node;
    if (tail == nullptr) {
        tail = head;
    }
    num_items++;
}

// adds to end of list
void Single_Linked_List::push_back(int item) {
    Node* new_node = new Node(item);
    if (tail == nullptr) {
        head = tail = new_node;
    }
    else {
        tail->next = new_node;
        tail = new_node;
    }
    num_items++;
}

// removes first element
void Single_Linked_List::pop_front() {
    if (empty()) {
        throw std::runtime_error("List is empty");
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    if (head == nullptr) {
        tail = nullptr;
    }
    num_items--;
}

// remove last element 
void Single_Linked_List::pop_back() {
    if (empty()) {
        throw std::runtime_error("List is empty");
    }
    if (head == tail) {
        delete head;
        head = tail = nullptr;
    }
    else {
        Node* current = head;
        while (current->next != tail) {
            current = current->next;
        }
        delete tail;
        tail = current;
        tail->next = nullptr;
    }
    num_items--;
}

// front
int& Single_Linked_List::front() {
    if (empty()) {
        throw std::runtime_error("List is empty");
    }
    return head->data;
}

// back
int& Single_Linked_List::back() {
    if (empty()) {
        throw std::runtime_error("List is empty");
    }
    return tail->data;
}

// insert
void Single_Linked_List::insert(int index, int item) {
    if (index < 0 || index > num_items) {
        throw std::out_of_range("Index out of range");
    }
    if (index == 0) {
        push_front(item);
    }
    else if (index == num_items) {
        push_back(item);
    }
    else {
        Node* new_node = new Node(item);
        Node* current = head;
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
        num_items++;
    }
}

// remove
bool Single_Linked_List::remove(int index) {
    if (index < 0 || index >= num_items) {
        return false;
    }
    if (index == 0) {
        pop_front();
    }
    else {
        Node* current = head;
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        Node* temp = current->next;
        current->next = temp->next;
        if (temp == tail) {
            tail = current;
        }
        delete temp;
        num_items--;
    }
    return true;
}

// find: Removes the elemnt at the specified indesx  
int Single_Linked_List::find(int item) const {
    Node* current = head;
    int index = 0;
    while (current != nullptr) {
        if (current->data == item) {
            return index;
        }
        current = current->next;
        index++;
    }
    return num_items;  // item not found
}

// get: Returns the element at the specified index
int Single_Linked_List::get(int index) const {
    if (index < 0 || index >= num_items) {
        throw std::out_of_range("Index out of range");
    }
    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    return current->data;
}

// empty
bool Single_Linked_List::empty() const {
    return num_items == 0;
}

// size
int Single_Linked_List::size() const {
    return num_items;
}
