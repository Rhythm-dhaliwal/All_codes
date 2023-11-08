#include<stdio.h>

int main()
{
  
  int i,b;
  label:
  printf("ENTER THE DIGIT WHICH TABLE YOU WANT TO PRINT\n");
  scanf("%d",&b);

 for ( i = 1; i <= 10; i++)
 {
   
  printf("%d*%d=%d\n",b,i,(b*i));
 
 }
 
 goto label;
  
    return 0;
}
