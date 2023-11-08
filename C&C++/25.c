#include<stdio.h>
int main()
{
    printf("lets learn about pointers\n");
    int a=76;
    int* ptra=&a;
    int* ptr2=NULL;
    printf("The address of to a is %p\n",&ptra);
    printf("The address of to a is %p\n",ptra);
    printf("The address of to a is %p\n",&a);
    printf("The address of to a is %p\n",ptr2);
    printf("The value of a is %d\n",*ptra);
    printf("The value of a is %d\n",ptr2);
    return 0;
}