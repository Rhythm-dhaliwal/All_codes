#include <iostream>
#include <conio.h>

using namespace std;
class Circle
{
public:
    double radius;

    double compute_area()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle obj;

    obj.radius = 5.5;

    cout << "RADIUS OBJ IS:\t" << obj.radius << "\n";
    cout << "AREA OF OBJ IS:\t" << obj.compute_area() << "\n";

    cout << "\n\nRHYTHM DHALIWAL\nIT(SHIFT-2)";

    getch();
    return 0;
}