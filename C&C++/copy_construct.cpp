#include <iostream>
#include <conio.h>
using namespace std;
class Sample
{
    int id;

public:
    void init(int x)
    {
        id = x;
    }
    void display()
    {
        cout << endl<< "ID=" << id;
    }
};

int main()

{
    Sample obj1;
    obj1.init(10);
    obj1.display();

    Sample obj2(obj1);
    obj2.display();

     cout << "\n\nRHYTHM DHALIWAL\nIT(SHIFT-2)";
    return 0;
}