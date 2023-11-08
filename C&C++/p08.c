#include <stdio.h>
int main()
{
    int num;
    printf("ENTER THE INTEGER:");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d IS EVEN.", num);
    }
    else
    {
        printf("%d IS ODD.", num);
    }
    printf("\n\nTHIS PROGRAM IS MADE BY:\n\nManmeet singh\n IT (SHIFT-1)");

    return 0;
}