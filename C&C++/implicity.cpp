#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int x = 10;
    char y = 'a';
    float z = 1.0;
//int add;
    /* Y implicity converted to int  using ASCII table
       the value of Y is 97 */

    
    x = x + y;
    

    // x is implicitly converted to Float

    z = x + z;

    cout << "x= " << x << "\n"
         << endl
         << "y= " << y << "\n"
         << endl
         << "z= " << z << "\n"
         << endl;

   cout << "\n\nRHYTHM DHALIWAL\nIT(SHIFT-2)";
    return 0;
}