#include <stdio.h>
int addnsub(int *a, int *b)
{
    int add;
    add = *a;
    *a = *a + *b;
    *b = add - *b;
    return 0;
}
int main()
{
    int a = 4, b = 3;
    printf("before running the program value of a=%d,b=%d\n", a, b);
    addnsub(&a, &b);
    printf("after running the program value of a=%d,b=%d\n", a, b);
    return 0;
}
