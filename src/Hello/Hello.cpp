#include <iostream>

#include <Math/Addition.hpp>
#include <Math/Subtraction.hpp>
#include <Transform/Transform.hpp>

int main()
{
    Transform t(2.0, 4.0, 5.0);
    std::cout << "Hello world 2" << std::endl;
    
    t.print();
    
    std::cout << add(5,4) << std::endl;
    std::cout << subtract(5,4) << std::endl;
    
    return 0;
}