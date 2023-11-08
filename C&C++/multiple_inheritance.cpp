#include <iostream>
using namespace std;
class Vehicle
{
public:
    Vehicle()
    {
        cout << "this  is a vehicle\n";
    }
};

class fourwheeler
{
public:
    fourwheeler()
    {
        cout << "this is a 4 wheeler\n";
    }
};
class Car : public Vehicle, public fourwheeler
{
};
int main()
{
    Car obj;
   cout << "\n\nRHYTHM DHALIWAL\nIT(SHIFT-2)";
    return 0;
}