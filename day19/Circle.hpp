#include <cmath>
#include <iostream>

using namespace std;

class Circle {

private: 
    double radius;

    double area() {
        return M_PI * pow(radius, 2.0); 
    }

    double perimeter() {
        return 2 * M_PI * radius;
    }

public:    
    Circle();
    friend ostream &operator<<(ostream &out, const Circle &c);
    
};
