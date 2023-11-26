#include "Node.hpp"
template <typename T>

Node<T>::Node(){
    
    this->value=0;
    this->next=nullptr;
    this->prev=nullptr;
}
template <typename T>
Node<T>::Node(T val){
    this->value=val;
    this->next=nullptr;
    this->prev=nullptr;
}

template class Node<int>;
template class Node<float>;
template class Node<double>;