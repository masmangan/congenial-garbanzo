#include <iostream>

using namespace std;

class Calculator
{
public:
    Calculator(int a, int b);
    int add() const;
private:
    int a;
    int b;
};

Calculator::Calculator(int va, int vb)
{
    a = va;
    b = vb;
}

int Calculator::add() const
{
    return a + b;
}

int main()
{
    int a;
    int b;
    cin >> a; 
    cin >> b; 

    Calculator c(a, b);

    cout << "X = " << c.add() << endl;
    return 0;
}

