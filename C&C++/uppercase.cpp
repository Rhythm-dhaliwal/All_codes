#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char alpha;
    cout << "ENTER AN ALPHABET:\n";
    cin >> alpha;

    if (alpha >= 'A' && alpha <= 'Z')
    {
        alpha += 32;
        cout << "\nLOWERCASE OF THE GIVEN ALPHABET IS:\n"
             << alpha;
    }

    else if (alpha >= 'a' && alpha <= 'z')
    {
        alpha -= 32;
        cout << "\nUPPERCASE OF THE GIVEN ALPHABET IS:\n"
             << alpha;
    }
    else
    {
        exit;
    }
    cout << "\n\nRHYTHM DHALIWAL\nIT(SHIFT-2)";
    return 0;
}