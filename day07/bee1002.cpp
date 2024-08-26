#include <iostream>
#include <iomanip>

using namespace std;

class Circle
{
public:
    Circle(double radius);
    double area() const;

private:
    double radius;
};

Circle::Circle(double vradius)
{
    radius = vradius;
}

double Circle::area() const
{
    return 3.14159 * radius * radius;
}

int main()
{
    double r;
    cin >> r;

    Circle c(r);

    cout << fixed << setprecision(4);
    cout << "A=" << c.area() << endl;
    return 0;
}
