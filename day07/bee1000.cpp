#include <iostream>

using namespace std;

class Greeting
{
public:
    string say_hello() const;
};

string Greeting::say_hello() const
{
    return "Hello World!";
}

int main()
{
    Greeting g;
    cout << g.say_hello() << endl;
    return 0;
}
