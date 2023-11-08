#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define e 0.001
#define f(x) 0.5+sin(x)-(x)

int main() {
    float f0,f1,f2;
    float x0,x1,x2;
    int i=0;
    printf("ENTER THE VALUE OF X0 :\n");
    scanf("%f",&x0);
    
    printf("ENTER THE VALUE OF X1 :\n");
    scanf("%f",&x1);
    
    do {
    f0=f(x0);
    f1=f(x1);
    
    x2= ((x0*f1)-(x1*f0))/(f1-f0);
    f2=f(x2);
    f0=f1;
    f1=f2;
    x0=x1;
    x1=x2;
    
    i++;
    printf("NUMBER OF ITERATIONS:%d\t\t",i);
    printf("ROOT IS:%f\t\t",x2);
    printf("VALUE OF FUNCTION:%f\t\n",f2);
    }
    while(fabs(f2)>e);


    return 0;
}