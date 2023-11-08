#include <stdio.h>

int fib_recursive(int a)
{
    if (a == 1 || a == 2)
    {
        return a - 1;
    }
    else
    {
        return fib_recursive(a - 1) + fib_recursive(a - 2);
    }
}
int fib_itratively(int a)
{
    int c = 0, d = 1;
    for (int i = 0; i < a - 1; i++)
    {
        d = c + d;
        c = d - c;
    }
    return c;
}

int main()
{
    int b;
    printf("Enter the index to get fibnacci series\n");
    scanf("%d", &b);
    printf("The value of fibnacci number at the position %d by using itrative aproch is %d\n", b, fib_itratively(b));
    printf("The value of fibnacci number at the position %d by using recurcive aproch is %d\n", b, fib_recursive(b));
  

    return 0;
}
