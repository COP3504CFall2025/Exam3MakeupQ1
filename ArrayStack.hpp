#ifndef ARRAYSTACK_HPP
#define ARRAYSTACK_HPP

#include <stdexcept>

template<typename T>
class ArrayStack {
private:
    T* data;
    int capacity;
    int topIndex;

public:
    ArrayStack(int cap = 1000) : capacity(cap), topIndex(-1) {
        data = new T[capacity];
    }

    ~ArrayStack() {
        delete[] data;
    }

    void push(const T& value) {
        if (topIndex + 1 == capacity)
            throw std::runtime_error("Stack overflow");
        data[++topIndex] = value;
    }

    void pop() {
        if (empty())
            throw std::runtime_error("Pop from empty stack");
        topIndex--;
    }

    T& top() {
        if (empty())
            throw std::runtime_error("Top of empty stack");
        return data[topIndex];
    }

    bool empty() const {
        return topIndex == -1;
    }
};

#endif
