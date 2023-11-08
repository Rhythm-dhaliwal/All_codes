#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d 1s not a leap year.", year);
    }
    else if (year % 4 == 0)
    {
        printf(" %d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }
    printf("\n\nTHIS PROGRAM IS MADE BY:\n\nManmeet singh\nIT (SHIFT-1)");
    return 0;
}