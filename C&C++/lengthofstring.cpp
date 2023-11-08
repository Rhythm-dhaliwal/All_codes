#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char string[20], *ptr;
    int length = 0;
    cout << "Enter the String: ";
    gets(string);
    ptr = &string[0];
    while (*ptr)
    {
        length++;
        ptr++;
    }
    cout << "\nLength:" << length;
    cout << endl;
    cout << "\n\nRHYTHM DHALIWAL\nIT(SHIFT-2)";
    return 0;
}