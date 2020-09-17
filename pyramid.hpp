#include "tetragon.hpp"
#include_next <iostream>
#include <istream>
class Pyramid : public Tetragon
{
    private:
        float h;
        float v() const; 
    public:
    
        
        Pyramid(float m_h, float m_Length) : Tetragon(m_Length), h(m_h)
        {

        };
        float ap() const;
        friend std::istream &operator>>(std::istream &in, Pyramid &p);
        friend std::ostream &operator<<(std::ostream &out, Pyramid &p);        
};

