#include <stdio.h>
int takenumber()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    return a;
}
int main()
{
    int c;
    c = takenumber();
    printf("the number you entered is %d", c);

    return 0;
}