#pragma once
#include <istream>
#include <ostream>



class Tetragon
{
    protected:
        float Length;
    public:
        Tetragon();
        Tetragon(int Length);
        virtual void show(std::ostream&) const;
        virtual float s() const;
        virtual float p() const;
        virtual float d() const;
        friend std::ostream &operator<<(std::ostream &os, const Tetragon &t);
        friend std::istream &operator>>(std::istream &in, const Tetragon &t);
};
