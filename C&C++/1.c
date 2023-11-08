#include<stdio.h>

int main()
{
    int age;
   printf("enter your age\n");
   scanf("%d",&age);
 
 switch (age)
  {
  case 3:
      printf("the age is 3");
      break;

   case 12:
   printf("the age is 12");
   break;  
  
  default:
  printf("the age is not registred ");
      break;
  }
  return 0;
}
