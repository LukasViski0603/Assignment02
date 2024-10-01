// VectorStack.cpp
#include "VectorStack.h"
#include <stdexcept>
#include <numeric>

// adds element to top of stack
void VectorStack::push(int value) {
    data.push_back(value);
}

// removes top element from stack
void VectorStack::pop() {
    if (empty()) {
        throw std::runtime_error("Stack is empty");
    }
    data.pop_back();
}

// returns top element 
int VectorStack::top() const {
    if (empty()) {
        throw std::runtime_error("Stack is empty");
    }
    return data.back();
}

// returns true if empty
bool VectorStack::empty() const {
    return data.empty();
}

// returns # of elements in stack
int VectorStack::size() const {
    return static_cast<int>(data.size());
}

double VectorStack::average() const {
    if (empty()) {
        throw std::runtime_error("Stack is empty");
    }
    return static_cast<double>(std::accumulate(data.begin(), data.end(), 0.0)) / size();
}