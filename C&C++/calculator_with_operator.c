#include <stdio.h>

int main()
{
    int a, b, ANSWER;
    char c;

    printf("ENTER THE OPERATOR:");
    scanf("%c", &c);
    // this is the progam to enter 2 numbers;
    printf("ENTER THE FIRST NUMBER:");
    scanf("%d", &a);

    printf("ENTER THE SECOND NUMBER:");
    scanf("%d", &b);
    // this fun is to enter operator;

    // output
    switch (c)
    {
    case '+':
        ANSWER = a + b;
        printf("ANSWER:\t%d", ANSWER);
        break;

    case '/':
        ANSWER = a / b;
        printf("ANSWER:\t%d", ANSWER);
        break;

    case '-':
        ANSWER = a - b;
        printf("ANSWER:\t%d", ANSWER);
        break;

    case '*':
        ANSWER = a * b;
        printf("ANSWER:\t%d", ANSWER);
        break;

    default:
        break;
    }

   printf("\n\nTHIS PROGRAM IS MADE BY:\n\n Manmeet singh\nIT (SHIFT-1)");

    return 0;
}
