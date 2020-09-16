#include "pyramid.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

float Pyramid::ap() const
{
    float tmp;
    tmp = pow((Length / 2), 2) + pow(h, 2);  
    return sqrt(tmp);
}


void Pyramid::show(std::ostream &os) const
{
    os << "Height " << ap() << "\n" << "volume "<< v() << std::endl;
}
float Pyramid::v() const 
{
    float tmp = (0.333333) * s() * ap();
    return tmp;
}


std::ostream &operator<<(std::ostream &out, Pyramid &p)
{
    p.show(out);
    return out;
}
