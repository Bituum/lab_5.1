#include "tetragon.hpp"
#include_next <iostream>
class Pyramid : public Tetragon
{
    public:
        float h;
        Pyramid()
        {
            std::cin >> h;
            //std::cin >> Length;
        };
        Pyramid(float h, float Length) : Tetragon(Length), h(h)
        {
        }   
        virtual float ap() const;
        virtual void show(std::ostream &os) const;
        virtual float v() const; 
        
        friend std::istream &operator>>(std::istream &in, const Tetragon &s);
};

