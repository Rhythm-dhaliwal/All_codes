#include <iostream>

using namespace std;
class a;
class b
{
    int number;

public:
    b(int x)
    {
        number = x;
    }
    void friend greatest(a a1, b b1);
};

class a
{
    int number;

public:
    a(int x)
    {
        number = x;
    }
    void friend greatest(a a1, b b1);
};

void greatest(a a1, b b1)
{
    if (a1.number > b1.number)
    {
        cout << "\nNumber in class A is the greatest i.e.\t" << a1.number;
    }
    else if (a1.number < b1.number)
    {
        cout << "\nNumber in class B is greatest i.e:\t" << b1.number<<"\n";
    }
    else
    {
        cout << "\nNumber in both classes are equal";
    }
}

int main()
{

    // cout<<"\n\n Program to Find greatest of two numbers"
    int num;
    cout << "\nEnter number for class A: ";
    cin >> num;
    a a1(num);

    cout << "\nEnter number for class B: ";
    cin >> num;
    b b1(num);

    greatest(a1, b1);
    cout << "\n";

    return 0;
}