#include <stdio.h>
void printstar(int a);
int main()
{
    int b, c;

    {

        printf("enter the number of stars you want to print\n");
        scanf("%d", &b);
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%c", '*');
            }
            printf("%c\n",'*');

            
        }
    }

    return 0;
}