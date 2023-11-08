#include <stdio.h>

int main()

{
    int j = 1, k = 2, *ptr = &k;

    printf("J has the value  %d and is stored at %p\n", j, &j);
    printf("k has the value  %d and is stored at %p\n", k, &k);
    printf("ptr has the valuue %p and is stored at %p\n", ptr, &*ptr);
    printf("The value of the integer pointed by ptr is %d\n", *ptr);

    return 0;
}
