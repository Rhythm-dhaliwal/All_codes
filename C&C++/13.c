#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0, j = 0; i <= 10; i++,j=j+1)
    {
        printf("%d %d\n", i,j);
    }

    return 0;
}