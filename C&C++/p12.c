#include <stdio.h>

int main()
{

    int a, b, max;
    printf("ENTER 1st NUMBER:");
    scanf("%d", &a);

    printf("ENTER 2st NUMBER:");
    scanf("%d", &b);

    // THIS IS THE TERNORY OPERATOR
    max = (a > b) ? a : b;

    printf("Largest number between %d and %d is %d.", a, b, max);

    printf("\n\nTHIS PROGRAM IS MADE BY:\n\nManmeet singh\n IT(SHIFT-1)");

    return 0;
}
