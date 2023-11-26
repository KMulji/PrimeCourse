#include <iostream>
#include "Doubly.hpp"
#include "Node.hpp"
int main()
{

    std ::cout << "Welcome to doubly linked list" << std::endl;
    std ::cout << "1. print" << std::endl;
    std ::cout << "2. Prepend" << std::endl;
    std ::cout << "3, Append" << std::endl;
    std ::cout << "4. insert a value at a index" << std::endl;
    std ::cout << "5. delete a value" << std::endl;
    int n;
    int val;
    int index;
    Doubly<int> d = Doubly<int>();
    do
    {
        std::cin >> n;
        switch (n)
        {
        case 1:
            d.Print();
            break;
        case 2:
            std::cout << "Enter a value" << std::endl;
            std::cin >> val;
            d.Prepend(val);
            break;
        case 3:
            std::cout << "Enter a value" << std::endl;
            std::cin >> val;
            d.Append(val);
            break;
        case 4:
            std::cout << "Enter a value and index" << std::endl;
            std::cin >> val;
            std::cin >> index;

            d.InsertAt(index,val);
            break;
        case 5:
            std::cout << "Enter a value to delete" << std::endl;
            std::cin >> index;
            d.Delete(index);
            break;
        default:
            break;
        }
        /* code */
    } while (n != 7);
}