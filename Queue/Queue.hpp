
#ifndef QUEUE_H // include guard
#define QUEUE_H
#include "Node.hpp"
#include <stdlib.h>
template <typename T>
class Queue
{
private:
    size_t length;
    Node<T> *Head;
    Node<T> *Tail;

public:
    Queue();
    
    void Enque(T val);
    T Peek();
    T Deque();
};

#endif