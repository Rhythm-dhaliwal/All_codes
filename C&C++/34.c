#include <stdio.h>
void printstr(char str[])
{
    int i=0;
    while (str[i] = '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    // char str[] = {'R', 'h', 'y', 't', 'h', 'm', '\0'};
    // char str[]="Rhythm";
    char str[60];
    printf("ENTER YOUR MESSAGE HERE:\n");
    gets(str);
    // printstr(str);
    // printf("YOUR MESSAGE IS:\n%s\n",str);
    printf("YOUR MESSAGE IS:\n");
    puts(str);
    return 0;
}