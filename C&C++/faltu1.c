#include <stdio.h>

int main()

{
    double val1, val2, answer;
    char op;

    // THIS IS INPUT

    printf("PLEASE ENTER THE OPERATOR:\n");
    scanf("%c", &op);

    printf("ENTER THE 1 st VALUE:\n");
    scanf("%lf", &val1);

    printf("ENTER THE 2 nd VALUE:\n");
    scanf("%lf", &val2);

    switch (op)
    {
    case '+':
        answer = val1 + val2;
        printf("THE ANSWER IS:\n%lf", answer);
        break;

    case '-':
        answer = val1 - val2;
        printf("THE ANSWER IS:\n%lf", answer);
        break;

    case '*':
        answer = val1 * val2;
        printf("THE ANSWER IS:\n%lf", answer);
        break;

    case '/':
        answer = val1 / val2;
        printf("THE ANSWER IS:\n%lf", answer);
        break;

    default:
        break;
    }

    return 0;
}
