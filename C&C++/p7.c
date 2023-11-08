#include <stdio.h>
int main()
{
  int n, reverse = 0, remainder;
  printf("Enter an integer:");
  scanf("%d",&n);

  while (n != 0) 
  {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number:%d\n", reverse);
  printf("\n\nTHIS PROGRAM IS MADE BY:\n\nManmeet Singh\n IT (SHIFT-1)");

   return 0;
}