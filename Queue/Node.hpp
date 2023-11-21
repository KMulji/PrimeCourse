#ifndef Node_H // include guard
#define Node_H

template <typename T>
class Node
{
private:
    T value;
    Node<T> *next;

public:
    Node();
    Node(T val);
    T GetValue() { return this->value; }
    void SetValue(T value) { this->value = value; }
    void SetNext(Node<T> *n) { this->next = n; }
    Node<T> *GetNext() { return this->next; }
};
#endif
