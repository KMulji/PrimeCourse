#include <iostream>
#include "Stack.hpp"
#include "Node.hpp"
template <typename T>
Stack<T>::Stack()
{
    this->Head = nullptr;
    this->length = 0;
}
template <typename T>

void Stack<T>::Push(T val)
{
    Node<T> *temp = new Node(val);

    if (!this->Head)
    {
        this->Head = temp;
        return;
    }
    temp->SetNext(this->Head);
    this->Head = temp;
}

template <typename T>
T Stack<T>::Pop()
{
    T ans;
    if (!this->Head)
    {
        return -1;
    }
    if (!this->Head->GetNext())
    {
        ans = this->Head->GetValue();
        delete Head;
        Head = nullptr;
        return ans;
    }
    ans = this->Head->GetValue();
    Node<T> *temp = this->Head;

    this->Head = this->Head->GetNext();

    delete temp;
    temp = nullptr;

    return ans;
}
template <typename T>
T Stack<T>::Peek()
{
    if (!head)
    {
        return -1;
    }
    return this->Head->GetValue();
}
template class Stack<int>;
template class Stack<float>;
template class Stack<double>;