#pragma once
#include <istream>
#include <ostream>



class Tetragon
{
    protected:
        float Length;
        float p() const;
        float d() const;
    public:
        Tetragon();
        Tetragon(float m_Length);
        float s() const;
        friend std::ostream &operator<<(std::ostream &os, const Tetragon &t);
        friend std::istream &operator>>(std::istream &in, Tetragon &s);
};
