#include <iostream>
#include "Stack.hpp"

int main(){
    Stack<int> s = Stack<int>();
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.Push(4);

    s.Pop();
    s.Pop();
    s.Pop();
    s.Pop();
    return 0;
}