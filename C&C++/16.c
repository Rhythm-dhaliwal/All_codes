#include <stdio.h>

int main()

{
    int num;
    for (int i = 0; i < 11; i++)
    {
        printf("%d\n", i);

        for (int j = 0; j < 11; j++)
        {
            printf("ENTER A NUMBER\n");
            scanf("%d", &num);
            if (num == 16)
                printf("your are going to be in 11th class\n");

            if (num == 16)
                goto end;
        }
    }

end:


return 0;
}
