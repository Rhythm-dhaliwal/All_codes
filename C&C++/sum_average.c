#include <stdio.h>

int main()

{
    int i = 1, a, j;
    float average, sum = 0;
    printf("\nENTER THE NUMBER OF ELEMENTS:");
    scanf("%d", &a); // a is the number of elements we want to take for sum & average.
    printf("\nENTER THE VALUES:\n");

    while (i <= a)
    {
        scanf("%d", &j); // j is the values of a.
        sum = sum + j;
        i++;
    }
    printf("\nSUM OF NUMBER: %f", sum);
    average = sum / a; // FORMULA FOR AVERAGE.
    printf("\nAVERAGE OF SUM IS: %f", average);
    printf("\n\nTHIS PROGRAM IS MADE BY:\n\nRHYTHM DHALIWAL\nIT (SHIFT-2)\n");

    return 0;
}
