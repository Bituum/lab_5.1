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


// void Pyramid::show(std::ostream &os) const
// {
//     os << "Height " << ap() << "\n" << "volume "<< v() << std::endl;
// }
float Pyramid::v() const 
{
    return (s() * ap() /3);
}


std::ostream &operator<<(std::ostream &out, Pyramid &p)
{
    out << "Height " << p.ap() << "\n" << "volume "<< p.v() << "\n";
    return out;
}
std::istream &operator>>(std::istream &in, Pyramid &p)
{
    std::cout << "Enter the apothem and the length" << std::endl;
    in >> p.h >> p.Length;
    return in;
}
