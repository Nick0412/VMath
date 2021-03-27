#include <iostream>

#include "vector.h"

int main()
{
    VMath::Vector<> v1;
    VMath::Vector<double, 3> v2({1.1,2.2,3.4});
    VMath::Vector<double, 3> v3(v2);

    try 
    {
        VMath::Vector<double, 2> v5({3.0,4.0});
        // std::cout << v5.magnitude();
        VMath::Vector<double, 2> new_vec = 3.0 * v5;
        std::cout << new_vec[0] << "\n";
        std::cout << new_vec[1];
    }
    catch (std::exception ex)
    {
        std::cout << ex.what();
    }
} 