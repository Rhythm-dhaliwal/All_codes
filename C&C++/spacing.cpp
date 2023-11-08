#include <iostream>
using namespace std;
// function to remove spaces
void removeSpaces(char *str)
{
    int count = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i];
    str[count] = '\0';
}

int main()
{
    char str[] = "R h  y   t h m    D  h a    l i  w a l";
    removeSpaces(str);
    cout << str;
    cout << "\n\nRHYTHM DHALIWAL\nIT(SHIFT-2)";
    return 0;
}