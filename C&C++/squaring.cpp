#include <iostream>
#include <conio.h>
using namespace std;

template <class T>

T square(T num)
{
    return num * num;
}

int main()
{
    int int_num;
    float float_num;

    cout << "ENTER A NUMBER TO GET ITS SQUARE:";
    cin >> int_num;
    cout << "SQUARE OF THE GIVEN NUMBER IS:" << square(int_num) << endl;

    cout << "\nENTER A FLOATING NUMBER TO GET ITS SQUARE:";
    cin >> float_num;
    cout << "SQUARE OF THE GIVEN NUMBER IS:" << square(float_num) << endl;

    cout << "\n\nRHYTHM DHALIWAL\nIT(SHIFT-2)";
    return 0;
}
