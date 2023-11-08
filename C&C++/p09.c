#include <stdio.h>
// function to calculate sum of geometric series

float sumgeometric(float a, float r, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a;
        a = a * r;
    }
    return sum;
}

int main()
{
    int a = 1;
    float r = 0.5;
    int n = 5;
    printf("%f", sumgeometric(a, r, n));
    printf("\n\nTHIS PROGRAM IS MADE BY:\n\nManmeetsingh\nIT  (SHIFT-1)");

    return 0;
}