#include <stdio.h>
int main()
{
    int i, factorial = 1, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is: %d", num, factorial);
    
    printf("\n\nTHIS PROGRAM IS MADE BY:\n\nManmeet singh\nIT (SHIFT-1)");


    return 0;
}