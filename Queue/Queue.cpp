#include "Queue.hpp"
#include <stdlib.h>
#include "Node.hpp"
using std::size_t;
template <typename T>

Queue<T>::Queue()
{
    this->length = 0;
    this->Head = nullptr;
    this->Tail = nullptr;
}


template <typename T>
void Queue<T>::Enque(T val)
{
    Node<T> *temp = new Node<T>();
    temp->SetValue(val);
    if (!this->Head || !this->Tail)
    {

        this->Head = temp;
        this->Tail = temp;
        this->length++;
        return;
    }
    this->Tail->SetNext(temp);
    this->Tail = temp;
    temp = nullptr;
    this->length++;
}
template <typename T>
T Queue<T>::Deque()
{
    if(!this->Head||!this->Tail){
        return -1;
    }
    T ans = this->Head->GetValue();
    Node<T> *temp= this->Head;
    
    if(this->Head==this->Tail){
        this->Head=nullptr;
        delete temp;
        temp=nullptr;
        return ans;
    }
    this->Head = this->Head->GetNext();
    delete temp;
    temp=nullptr;
    this->length--;
    return ans;
}
template <typename T>
T Queue<T>::Peek(){
    if(!this->Head || !this->Tail){
        return -1;
    }
    return this->Head->GetValue();
}
template class Queue<int>;
template class Queue<float>;
template class Queue<double>;
