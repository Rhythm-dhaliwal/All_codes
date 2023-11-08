#include <iostream>
#include <conio.h>
using namespace std;
class Distance
{
public:
    // member object
    int feet, inch;

    // constructor to initialize the object's value
    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }
    // overloading(-)operator to perform decrement
    // operation of distance objects
    void operator-()
    {
        feet--;
        inch--;
        cout << "\nfeet & inches(decrement):" << feet << "'" << inch;
    }
};
// driver code
int main()
{
    // declare and intialize the constructor
    Distance d1(8, 9);

    // use (-) unary operator by single operand
    -d1;
    //cout << "\n\nTHIS PROGRAM IS MADE BY:\n\nRHYTHM DHALIWAL\nIT (SHIFT-2)";
    cout << "\n\nRHYTHM DHALIWAL\nIT(SHIFT-2)";
    return 0;
}