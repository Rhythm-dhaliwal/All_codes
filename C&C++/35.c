#include <stdio.h>
#include <string.h>
void printstr(char str[])
{
    int R = 0;
    while (str[R] = '\0')
    {
        printf("%c", str[R]);
        R++;
    }
}
int main()
{
    char str[50];
    printf("ENTER YOUR MESSAGE HERE:\n");
    gets(str);
    printf("The length of your messege is %d\n\n", strlen(str));
    printf("HERE IS YOUR SECRET MESSEGE:\n");
    puts(strrev(str));

    return 0;
}
