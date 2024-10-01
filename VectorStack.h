#pragma once

#include <vector>

class VectorStack {
private:
    std::vector<int> data;

public:
    void push(int value);
    void pop();
    int top() const;
    bool empty() const;
    int size() const;
    double average() const;
};