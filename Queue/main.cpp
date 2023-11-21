#include <iostream>
#include "Queue.hpp"
int main()
{
    std::cout<<"Welcome to interactive queue"<<std::endl;
    std::cout<<"Select one of the following"<<std::endl;
    std::cout<<"1->Enque"<<std::endl;
    std::cout<<"2->Peek"<<std::endl;
    std::cout<<"3->Deque"<<std::endl;

    int n;
    int val;
    Queue<int> q = Queue<int>();
    do{
        std::cin>>n;
        switch (n)
        {
        case 1:
            std::cout<<"Enter a value to put in the queue"<<std::endl;
            std::cin>>val;
            q.Enque(val);
            break;
        case 2:
            std::cout<<q.Peek()<<std::endl;
            break;
        case 3:
            std::cout<<q.Deque()<<std::endl;
        default:
            break;
        }
    }while(n!=7);
    return 0;
}