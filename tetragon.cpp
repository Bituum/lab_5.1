#include "tetragon.hpp"
#include <iostream>
#include <cmath>
#include <istream>
#include <ostream>

Tetragon::Tetragon()
{
}
Tetragon::Tetragon(float m_Length) : Length(m_Length)
{
    
}

float Tetragon::p() const
{
    return Length * 4;
}

// void Tetragon::show(std::ostream &os) const
// { 
//     os <<"square: " << s() << "\n" <<"perimetr: " << p() << "\n" << "diagonal: "<< d() <<std::endl;
// }

float Tetragon::s() const
{
    return Length * Length;
}

float Tetragon::d() const
{
    float tmp;
    tmp = pow(Length, 2) + pow(Length, 2);
    return sqrt(tmp);
}

std::ostream &operator<<(std::ostream &os, const Tetragon &t)
{
   os <<"square: " << t.s() << "\n" <<"perimetr: " << t.p() << "\n" << "diagonal: "<< t.d() << "\n";
   return os;
}
std::istream &operator>>(std::istream &in, Tetragon &s)
{
    in >> s.Length;
    return in;
}
