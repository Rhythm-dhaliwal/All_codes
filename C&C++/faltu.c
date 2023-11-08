#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>

void main()
{
    int *p, i;
    if (*p = (int*)calloc(800, 2) == NULL)
    {
        printf("\nOut of memory\n");
        exit(0);
    }

    for (i = 0; i < 800; i++)
    {
        printf("0*%x", (p + i));
        printf("%d", *(p + i));
    }
    getchar();

    for (i = 0; i < 800; i++)
    {
        *(p + i) = 1;
    }
    for (i = 0; i < 800; i++)
    {
        printf("O*%x", (p + i));
        printf("%d", *(p + i));
    }
    
}
