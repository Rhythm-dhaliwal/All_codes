#include <iostream>
#include<conio.h>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "this is a vehicle";
    }
};
class Car : public vehicle
{
};
int main()

{
    Car obj;
    cout << "\n\nRHYTHM DHALIWAL\nIT(SHIFT-2)";
    return 0;
}