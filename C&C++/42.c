#include <stdio.h>
int b = 34;
int fun(int b1 )
{
    
    static int myvar=0;
    printf("The value of myvar is %d\n",myvar);
    // printf("The address of b in fun is:%d\n", &b);
    // printf("the value of b in global variable is:%d\n", b);
    return  myvar++;
}
int main()
{
    int b = 24;
    int val = fun(b);
     val = fun(b);
     val = fun(b);
     val = fun(b);
    int *ptr = &val;
    // printf("The address of b in main is:%d\n", &b);
    // printf("the value of A:%d\n", val);
    return 0;
}
