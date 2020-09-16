#include "tetragon.hpp"
#include <iostream>
#include <cmath>
#include <istream>
#include <ostream>


Tetragon::Tetragon(int Length) : Length(Length)
{
    
}

Tetragon::Tetragon()
{
    std::cin >> Length;
}


float Tetragon::p() const
{
    return Length * 4;
}

void Tetragon::show(std::ostream &os) const
{ 
    os << s() << ", " << p() << ", " << d();
}

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

std::ostream &operator<<(std::ostream &os, const Tetragon &s)
{
   s.show(os);
   return os;
}


std::istream &operator>>(std::istream &in, const Tetragon &s)
{
    return in >> s.Length;
}
