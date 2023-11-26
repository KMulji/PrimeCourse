#ifndef DOUBLY_H // include guard
#define DOUBLY_H
#include "Node.hpp"
template <typename T>
class Doubly
{
private:
    Node<T> *Head;
    Node<T> *Tail;
    int Length;

public:
    Doubly()
    {
        this->Length = 0;
        this->Head = nullptr;
        this->Tail=nullptr;
        
    };
    void Prepend(T val);
    void Append(T val);
    void InsertAt(int index,T val);
    void Print();
    T Delete(int val);
};

#endif