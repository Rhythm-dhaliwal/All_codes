#include <stdio.h>

int main()
{
    int my_array[] = {1, 2, 61, 54, 21, -12, 13}, *ptr;
    ptr = &my_array[0];
    for (int i = 0; i < 7; i++)
    {
        printf("my_array[%d]:\t%d\n", i, my_array[i]);
        printf("\nptr+ %d=%d\n", i, *(ptr + i));
    }

    return 0;
}
