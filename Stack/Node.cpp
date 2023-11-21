#include <iostream>
#include "Node.hpp"

template<typename T>
Node<T>::Node(){
    this->value=0;
    this->next=nullptr;
}
template<typename T>
Node<T>::Node(T value){
    this->value=value;
    this->next=nullptr;
}
template class Node<int>;
template class Node<float>;
template class Node<double>;