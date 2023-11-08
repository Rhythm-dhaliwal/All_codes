#include <stdio.h>

int main()
{
    struct computer
    {
        float cost;
        int year;
        int cpu_speed;
        char cpu_type[16];
    }

    model;
    printf("the type of the cpu inside your computer?\n");
    gets(model.cpu_type);
    printf("the speed (Ghz) of the cpu?\n");
    scanf("%d", &model.cpu_speed);
    printf("the year in which your computer was made?\n");
    scanf("%d", &model.year);
    printf("How much you paid for the computer?\n");
    scanf("%f", model.cost);

    { // output
        printf("how are what you enter :\n");
        printf("year %d\n", model.year);
        printf("cost :Rs %6.2f\n", model.cost);
        printf("cpu type :%s\n", model.cpu_type);
        printf("model year:%d\n", model.year);
    };
    return 0;
}
