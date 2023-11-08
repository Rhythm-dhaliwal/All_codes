#include<stdio.h>
#include<string.h>
union employee
{
   int id;
   char name[30];
   int salary;
};

int main()
{
   union employee e1;
    e1.id=1;
    strcpy(e1.name,"rhythm");
    e1.salary=250000;
    
    printf("id=%d\n",e1.id);
    printf("name= %s\n",e1.name);
    printf("salary=%d\n",e1.salary);
     
    return 0;
}
