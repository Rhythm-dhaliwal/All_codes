#include<stdio.h>
int main()
{
    char str[15];
    char str1[15];
    printf("Enter your name here:\n");
    gets(str);
     printf("Enter your friends name here:\n");
    gets(str1);
    printf("%s is a good friend of %s.\n",str,str1);
printf("AFTER CONCANATING str and str 1 we will get\n");
    puts(strcat(str,str1));
   
    return 0;
}
