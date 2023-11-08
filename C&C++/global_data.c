#include <stdio.h>

int main()

{
    int a = 15;
    char b = 'a';
    float c=2.0002;
    // printf("\nTHE VALUE OF A IS%d\n", a);

    {
        for (int i = 0; i <= 5; i++)
        {
            printf("\nTHE VALUE OF A IS: %d\n", a);

            a = a + 1;
        }
    }

    // printf("THE VALUE OF A IS%d", a);
    return 0;
}