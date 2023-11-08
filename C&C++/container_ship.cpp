#include <iostream>
using namespace std;
class first
{
    public:
    first()
    {
        cout<<"Hello from first class\n";
    }
};
class second
{
    first f;
    public:
    second()
    {
        cout<<"Hello from second class";
    }
};
int main()
{
    second s;
   cout << "\n\nRHYTHM DHALIWAL\nIT(SHIFT-2)";
    return 0;
}