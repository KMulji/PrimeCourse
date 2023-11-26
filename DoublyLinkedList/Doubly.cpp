#include <stdlib.h>
#include "Doubly.hpp"
#include "Node.hpp"
#include <iostream>

template <typename T>

void Doubly<T>::Prepend(T val)
{
    Node<T> *temp = new Node(val);
    this->Length++;
    if (!this->Head)
    {
        this->Head = temp;
        this->Tail = temp;
        return;
    }
    temp->SetNext(this->Head);
    this->Head->SetPrev(temp);
    this->Head = temp;
}
template <typename T>
void Doubly<T>::InsertAt(int index, T val)
{
    if (index < 0 || index > Length)
    {
        // error
        std::cout << "invalid index" << std::endl;
        return;
    }
    if (index == this->Length)
    {
        // append
        Append(val);
        return;
    }
    if (index == 0)
    {
        Prepend(val);
        return;
    }

    this->Length++;
    Node<T> *temp = new Node(val);

    Node<T> *curr = this->Head;

    for (int i = 0; curr && i != index; i++)
    {
        curr = curr->GetNext();
    }
    temp->SetNext(curr);
    temp->SetPrev(temp->GetNext()->GetPrev());
    curr->SetPrev(temp);
    temp->GetPrev()->SetNext(temp);
}
template <typename T>
void Doubly<T>::Print()
{
    Node<T> *curr = this->Head;

    while (curr)
    {
        std::cout << curr->GetValue() << std::endl;
        curr = curr->GetNext();
    }
    std::cout << "Reverse->" << std::endl;
    curr = this->Tail;
    while (curr)
    {
        std::cout << curr->GetValue() << std::endl;
        curr = curr->GetPrev();
    }
    std::cout<<this->Tail->GetNext()<<std::endl;
    std::cout<<this->Head->GetPrev()<<std::endl;
}
template <typename T>
void Doubly<T>::Append(T val)
{
    Node<T> *temp = new Node(val);
    this->Length++;
    if (!this->Tail || !this->Head)
    {
        this->Head = temp;
        this->Tail = temp;
        return;
    }
    this->Tail->SetNext(temp);
    temp->SetPrev(this->Tail);
    this->Tail = temp;
}
template <typename T>

T Doubly<T>::Delete(int val)
{
    Node<T> *curr = this->Head;

    for (int i = 0; curr && i < this->Length;i++)
    {
        if (curr->GetValue() == val)
        {
            break;
        }
        curr = curr->GetNext();
    }
    if (!curr)
    {
        return -1;
    }
    this->Length--;
    if (curr == this->Head)
    {
        this->Head = this->Head->GetNext();
        this->Head->SetPrev(nullptr);
        free(curr);
        T ans = curr->GetValue();
        return ans;
    }
    if (curr == this->Tail)
    {
        T ans = this->Tail->GetValue();
        this->Tail = this->Tail->GetPrev();
        this->Tail->SetNext(nullptr);
        curr->SetPrev(nullptr);
        return ans;
    }
    if (this->Head==this->Tail)
    {
        T ans = this->Head->GetValue();

        free(curr);
        curr = nullptr;
        this->Head = nullptr;
        this->Tail = nullptr;

        return ans;
    }
    T ans=curr->GetValue();
    curr->GetPrev()->SetNext(curr->GetNext());
    curr->GetNext()->SetPrev(curr->GetPrev());
    curr->SetNext(nullptr);
    curr->SetPrev(nullptr);
    return ans;
}
template class Doubly<int>;
template class Doubly<float>;
template class Doubly<double>;