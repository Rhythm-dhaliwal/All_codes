#include <iostream>
#include<conio.h>
using namespace std;
int main()

{

    int matOne[3][3], matTwo[3][3], matThree[3][3];
    int i, j, k;
    cout << "Enter the 9 elements of First matrix=\n";

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> matOne[i][j];
        }
    }
    cout << "\nEnter 9 Elements for second Matrix=\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> matTwo[i][j];
        }
    }
    // multiplying two matrices...
    cout << "multiply of the matrix=\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matThree[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                matThree[i][j] += matOne[i][k] * matTwo[k][j];
            }
        }
    }
    // for printing result
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << matThree[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n\nRHYTHM DHALIWAL\nIT (SHIFT-2)";
    return 0;
}
