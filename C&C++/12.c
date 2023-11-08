#include <stdio.h>

int main()
{
    int b = 0, a;
    printf("enter a number\n");
    scanf("%d", &a);
    while (b <= a)
    {
        printf("%d\n", b);
        b = b + 1;
    }

    return 0;
}