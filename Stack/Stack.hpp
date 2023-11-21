
#ifndef STACK_H // include guard
#define STACK_H
#include "Node.hpp"
#include <stdlib.h>
template<typename T>

class Stack{
    private:
        Node<T>* Head;
        std::size_t length;
    public:
        Stack();
        void Push(T val);
        T Pop();
        T Peek();
};
#endif