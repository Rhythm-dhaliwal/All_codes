#include <stdio.h>

int fun(int a, int b);
int main()


{
    int a, b, c;
    a = 9;
    b = 87;
    c = fun(a, b);
    printf("The sum is %d", c);
    return 0;
}

int fun(int a, int b)
{
    return a + b;
}