#include "Circle.hpp"
#include <iostream>

ostream & operator<<(ostream &out, const Circle &c) {
    out << c.radius;
return out ;
}