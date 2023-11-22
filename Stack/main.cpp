#include <iostream>
#include "Stack.hpp"

int main(){
    std::cout<<"Welcome to interactive stack"<<std::endl;
    std::cout<<"Select one of the following"<<std::endl;
    std::cout<<"1->push"<<std::endl;
    std::cout<<"2->pop"<<std::endl;
    std::cout<<"3->peek"<<std::endl;

    int n;
    int val;
    Stack<int> s= Stack<int>();
    do{
        std::cin>>n;
        switch (n)
        {
        case 1:
            std::cout<<"Enter a value to put in the stack"<<std::endl;
            std::cin>>val;
            s.Push(val);
            break;
        case 2:
            std::cout<<s.Pop()<<std::endl;
            break;
        case 3:
            std::cout<<s.Peek()<<std::endl;
            break;
        default:
            break;
        }
    }while(n!=7);
    
    return 0;
}