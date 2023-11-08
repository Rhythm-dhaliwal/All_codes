#include <stdio.h>
#include <conio.h>
int main()

{
    int i, n, t1 = 0, t2 = 1;

    int next_term = t1 + t2;
    printf("ENTER THE NUMBER OF TERMS: ");
    scanf("%d", &n);

    printf("FIBONACCI SERIES: %d\t%d\t", t1, t2);

    for (i = 3; i <= n; i++)
    {
        printf("%d\t", next_term);
        t1 = t2;
        t2 = next_term;
        next_term = t1 + t2;
    }
    printf("\n\nTHIS PROGRAM IS MADE BY:\n\n Manmeet singh\n IT (SHIFT-1)");

    return 0;
}