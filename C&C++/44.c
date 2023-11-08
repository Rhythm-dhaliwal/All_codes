#include <stdio.h>
#include <strings.h>

struct driveinfo
{
    char name[30];
    int Dlnumber;
    char route[20];
    int kms;
};

int main()
{
    struct driveinfo d1, d2, d3;

    printf("ENTER THE INFORMATION OF DRIVERES IN YOUR AGENCY\n\n");
    printf("ENTER THE INFORMATION OF 1st DRIVER\n");

    printf("NAME:");
    scanf("%s", &d1.name);

    printf("DL NUMBER:");
    scanf("%d", &d1.Dlnumber);

    printf("ROUTE:");
    scanf("%s", &d1.route);

    printf("KMS DRIVED:");
    scanf("%d", &d1.kms);

    printf("\n\n\n");
    printf("ENTER THE INFORMATION OF 2nd DRIVER\n");

    printf("NAME:");
    scanf("%s", &d2.name);

    printf("DL NUMBER:");
    scanf("%d", &d2.Dlnumber);

    printf("ROUTE:");
    scanf("%s", &d2.route);

    printf("KMS DRIVED:");
    scanf("%d", &d2.kms);
    printf("\n\n\n");
    printf("ENTER THE INFORMATION OF 3rd DRIVER\n");

    printf("NAME:");
    scanf("%s", &d3.name);

    printf("DL NUMBER:");
    scanf("%d", &d3.Dlnumber);

    printf("ROUTE:");
    scanf("%s", &d3.route);

    printf("KMS DRIVED:");
    scanf("%d", &d3.kms);
    printf("\n\n\n");
    /*this is the output code*/

    printf("THE INFORMATION OF DRIVERS IN AGENCY IS GIVEN BELLOW\n");
    printf("***INFORMATION OF 1st DRIVER***\n");

    printf("NAME:");
    printf("%s\n", d1.name);

    printf("DL NUMBER:");
    printf("%d\n", d1.Dlnumber);

    printf("ROUTE:");
    printf("%s\n", d1.route);

    printf("KMS DRIVED:");
    printf("%d\n", d1.kms);

    printf("\n\n\n");
    printf("***INFORMATION OF 2nd DRIVER***\n");

    printf("NAME:");
    printf("%s\n", d2.name);

    printf("DL NUMBER:");
    printf("%d\n", d2.Dlnumber);

    printf("ROUTE:");
    printf("%s\n", d2.route);

    printf("KMS DRIVED:");
    printf("%d\n", d2.kms);

    printf("\n\n\n");

    printf("***INFORMATION OF 3rd DRIVER***\n");

    printf("NAME:");
    printf("%s\n", d3.name);

    printf("DL NUMBER:");
    printf("%d\n", d3.Dlnumber);

    printf("ROUTE:");
    printf("%s\n", d3.route);

    printf("KMS DRIVED:");
    printf("%d\n", d3.kms);
    printf("\n\n\n");
    return 0;
}
