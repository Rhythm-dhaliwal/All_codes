#include <iostream>
#include <conio.h>
using namespace std;
int a, b;
class A
{
public:
    A()
    {
        cout << "\nA's Construction Called\n"<< endl;
    }
};

class B
{
    static A a;

public:
    B()
    {
        cout << "\nB's Construction Called\n"<< endl;
    }
};

int main()
{

    A a; // a is a integer variable declared to call class A's function;
    B b; // a is a integer variable declared to call class A's function;
    cout << "\n\nRHYTHM DHALIWAL\nIT(SHIFT-2)";
    return 0;
}