#include "square.hpp"

Square::Square(float l) : lenth(l) { }

float Square::s() const {
    return lenth * lenth;
}
            
float Square::p() const {
    return 4 * lenth;
}

void Square::show(std::ostream& os) const {
    os << s() << ", " << p();
}

std::ostream &operator<<(std::ostream &os, const Square &s) {
    s.show(os);
    return os;
}
