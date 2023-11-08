#include <stdio.h>

int main()
{
    int a, b, c, n, sum;

    printf("Enter a Three Digit Number:");
    scanf("%d", &n);
    a = n / 100;
    b = ((n % 100) / 10);
    c = n % 10;
    sum = a + b + c;
    printf("Sum of Individual Digits of Given Numbers is:%d", sum);
    printf("\n\nTHIS PROGRAM IS MADE BY:\n\nManmeet singh\n IT(SHIFT-1)");

    return 0;
}