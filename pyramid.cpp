#include "pyramid.hpp"
#include <cmath>
#include <iostream>

float Pyramid::ap() const
{
    float tmp;
    tmp = pow((Length / 2), 2) + pow(h, 2);  
    return sqrt(tmp);
}


void Pyramid::show(std::ostream &os) const
{
    os << ap() << ", " << v();
}

float Pyramid::v() const 
{
    float tmp = (0.333333) * s() * ap();
    return tmp;
}
 
