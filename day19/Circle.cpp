#include "Circle.hpp"
#include <iostream>

Circle::Circle() {
    this->radius = 0.0;
}

ostream & operator<<(ostream &out, const Circle &c) {
    out << c.radius;
return out ;
}