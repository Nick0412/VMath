#include <iostream>

#include "vector.h"

int main()
{
    VMath::Vector<> v1;
    VMath::Vector<double, 3> v2({1.1,2.2,3.4});
    VMath::Vector<double, 3> v3(v2);

    VMath::Vector<double, 3> v4;
    v4 = v3;

    // std::cout << v4 << "\n";

    // try 
    // {
    //     VMath::Vector<double, 3> v5({1.1,2.2,3.4});
    //     std::cout << v5[2];
    //     std::cout << v5[3];
    // }
    // catch (std::exception ex)
    // {
    //     std::cout << ex.what();
    // }
} 