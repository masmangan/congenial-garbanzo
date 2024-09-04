#include <iostream>

#include "Point.h"
#include "Circle.h"

using namespace std;

int main()
{
    Point p(3, 14);
    Circle c(p, 42);

    cout << p.x << " " << p.y << endl;
    cout << c.center.x << " " << c.center.y <<  " " << c.radius << endl;

    return 0;
}
