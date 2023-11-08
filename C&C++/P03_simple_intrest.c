#include <stdio.h>

int main()

{
    int a, b, c, intrest;

    printf("ENTER THE AMOUNT TO COMPUTE THE INTREST:");
    scanf("%d", &a);

    printf("ENTER THE RATE INTREST:");
    scanf("%d", &b);

    printf("ENTER THE TENOR:");
    scanf("%d", &c);

    // formula to calculate the simple intrest;

    intrest = a * b * c / 100;
    printf("THE SIMPLE INTREST OF THE AMOUNT IS:%d", intrest);

    printf("\n\nTHIS PROGRAM IS MADE BY:\n\n Manmeet singh\n IT (SHIFT-1)");

    return 0;
}