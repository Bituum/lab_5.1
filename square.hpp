#include <iostream>

class Square
{
private:
    float lenth;
public:
    Square(float l);
    virtual ~Square() = default;

    virtual float s() const;
    virtual float p() const;

    virtual void show(std::ostream&) const;

    friend std::ostream &operator<<(std::ostream &os, const Square &s);
};


