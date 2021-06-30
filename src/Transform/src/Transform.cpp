#include <Transform/Transform.hpp>

#include <iostream>

Transform::Transform(double _x, double _y, double _z)
{
    x = _x;
    y = _y;
    z = _z;
}

void Transform::print()
{
    std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
}
