#pragma once

// Single_Linked_List: maintains a head and tail pointer; keeps track of the number of items

class Single_Linked_List {
private:
    struct Node {
        int data;
        Node* next;
        Node(int value) : data(value), next(nullptr) {}
    };

    Node* head;
    Node* tail;
    int num_items;

public:
    Single_Linked_List(); 
    ~Single_Linked_List(); 

    // Basic stuff
    void push_front(int item);
    void push_back(int item);
    void pop_front();
    void pop_back();
    int& front();
    int& back();
    bool empty() const;

    // More complex operations
    void insert(int index, int item);
    bool remove(int index);
    int find(int item) const;
    int size() const;
    int get(int index) const;
};

