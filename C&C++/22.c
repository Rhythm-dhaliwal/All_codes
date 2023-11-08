#include <stdio.h>
int main()
{
    float a, b;
    char z;
    float kmstometers = 1000.00;
    float kmstomile = 0.621371;
    float cmtoinches = 0.393701;
    float metertofoot = 3.28084;
    float kmstocms = 100000.00;

    while (1)
    {

        {
            printf("Enter the character .enter q to quit\n       1. kms To meters\n       2. kms To miles\n       3. cms To inches\n       4. meters To foot\n       5. kms To cms\n ");
            scanf(" %c", &z);
            

            switch (z)
            {
            case 'q':
                printf("Quitting the program......\n");
                goto end;
                break;

            case '1':
                printf("ENTER THE VALUE OF UNIT YOU WANT TO CONVERT\n");
                scanf("%f", &a);
                b = a * kmstometers;
                printf("%f kms is equal to %f meters\n", a, b);

                break;
            case '2':
                printf("ENTER THE VALUE OF UNIT YOU WANT TO CONVERT\n");
                scanf("%f", &a);
                b = a * kmstomile;
                printf("%f kms is equal to %f miles\n", a, b);

                break;
            case '3':
                printf("ENTER THE VALUE OF UNIT YOU WANT TO CONVERT\n");
                scanf("%f", &a);
                b = a * cmtoinches;
                printf("%f cms is equal to %f inches\n", a, b);

                break;
            case '4':
                printf("ENTER THE VALUE OF UNIT YOU WANT TO CONVERT\n");
                scanf("%f", &a);
                b = a * metertofoot;
                printf("%f meter is equal to %f foot\n", a, b);

                break;
            case '5':
                printf("ENTER THE VALUE OF UNIT YOU WANT TO CONVERT\n");
                scanf("%f", &a);
                b = a * kmstocms;
                printf("%f kms is equal to %f cms\n", a, b);

                break;

            default:
                break;
               
            }

        }
    }
    
end:
    return 0;
}

//kms To meters\n
//kms To miles\n
//cms To inches\n
//meters To foot\n
//kms To cms\n

