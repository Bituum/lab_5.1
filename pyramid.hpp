#include "tetragon.hpp"
class Pyramid : public Tetragon
{
    private:
        float h;
    public:
        Pyramid(float h, float Length) : Tetragon(Length), h(h)
        {
        }   
        virtual float ap() const;
        virtual void show(std::ostream &os) const;
        virtual float v() const; 
};

