#include <stdio.h>
int main()
{
    int a, b, c;
    printf("ENTER 1st NUMBER:");
    scanf("%d", &a);

    printf("ENTER 2st NUMBER:");
    scanf("%d", &b);

    printf("ENTER 3st NUMBER:");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d A IS THE GREATEST NUMBER", a);
    }

    else if (b > c && b > a)
    {
        printf("%d B IS THE GREATEST NUMBER", b);
    }

    else
    {
        printf("%d C IS THE GREATEST NUMBER", c);
    }
    printf("\n\nTHIS PROGRAM IS MADE BY:\n\nManmeet singh\nIT (SHIFT-1)");

    return 0;
}