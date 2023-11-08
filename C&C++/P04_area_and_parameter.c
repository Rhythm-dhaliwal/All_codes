#include <stdio.h>

int main()
{
    int len, bre, area, para;

    printf("ENTER THE LENGTH:");
    scanf("%d", &len);

    printf("ENTER THE BREATH:");
    scanf("%d", &bre);

    // formula of area;
    area = len * bre;

    // formula of parameter;
    para = len + bre;

    printf("AREA OF THE RECTANGLE:%d\n", area);
    printf("PARAMETER OF THE RECTANGLE:%d\n", 2 * para);
    printf("\n\nTHIS PROGRAM IS MADE BY:\n\n  Manmeet singh\n IT (SHIFT-1)");

    return 0;
}