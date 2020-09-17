#include "tetragon.hpp"
#include_next <iostream>
#include <istream>
class Pyramid : public Tetragon
{
    public:
        float h;
        
        Pyramid(float m_h, float m_Length) : Tetragon(m_Length), h(m_h)
        {
        }   
        virtual float ap() const;
        virtual void show(std::ostream &os) const;
        virtual float v() const; 
        friend std::istream &operator>>(std::istream &in, Pyramid &p);        
};

