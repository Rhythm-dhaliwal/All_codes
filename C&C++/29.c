#include <stdio.h>
void swap(int *a, int *b)
{
    int change;
    change = *a;
    *a = *b;
    *b = change;
    return;
}
int main()
{ int a=26,b=34;
    printf("%d and %d\n",a,b);
swap(&a,&b);
printf("%d and %d",a,b);



// printf("%d and %d\n",a,b);
// printf("%d and %d",b,a);
return 0;
}