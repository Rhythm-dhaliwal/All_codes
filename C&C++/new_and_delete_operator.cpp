#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
     int *pointint;
     float *pointfloat;
     pointint = new int;
     pointfloat = new float;

     // we are taking input from users here as INTEGER

     cout << "ENTER AN INTEGER:\n";
     cin >> *pointint;

     // we are taking input from users here as FLOAT

     cout << "ENTER A FLOATING POINT NUMBER:\n";
     cin >> *pointfloat;

     cout << "INTEGER WAS : " << *pointint << "\n"
          << endl;
     cout << "FLOAT NUMBER WAS : " << *pointfloat << "\n"
          << endl;

     //     dealocating memory process starts here::
     delete pointint;
     delete pointfloat;

     cout << "\n\nRHYTHM DHALIWAL\nIT(SHIFT-2)";
     return 0;
}
