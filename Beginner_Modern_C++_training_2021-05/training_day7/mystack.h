#ifndef MYSTACK_H
#define MYSTACK_H

#include <iostream>
#include <vector>

using namespace std;

class EmptyStackException : public std::exception {
public:
    EmptyStackException() {}
    const char* what() const noexcept override {
        return "Stack is empty";
    }
};

template <class T>
class MyStack {
public:
    MyStack() {
        cout << "MyStack()" << endl;
    }
    virtual ~MyStack() {
        cout << "~MyStack()" << endl;
    }
    void push(const T& item) {
        m_items.push_back(item);
    }
    T pop() {
        if(isEmpty()) {
            throw EmptyStackException();
        }
        T item = m_items.back();
        m_items.pop_back();
        return item;
    }
    bool isEmpty() const {
        return m_items.empty();
    }
private:
    vector<T> m_items;
};

#endif // MYSTACK_H
