#include<stdio.h>
int main()
{
    int a,b,c;
printf("choose the triangular pattern you want to use...\n 1.TRIANGULAR\n 2.REVERSE TRIANGULAR\n");
scanf("%d",&a);
if (a==1)
{

    printf("ENTER THE NUMBER OF STARS YOU WANT TO PRINT\n");
    scanf("%d",&b);

    for (int i = 0; i < b+1; i++)
{
    for (int j = 0; j < i; j++)
    {
        printf("*");
    }
    printf("\n");
   
}
}
if (a==2)
{
    printf("ENTER THE NUMBER OF STARS YOU WANT TO PRINT\n");
    scanf("%d",&c);
    for (int i =c; i>=1; i--)
    {
       for (int j = 0; j < i; j++)
       {
           printf("*");
       }
       printf("\n");
    }
    
}

else
{
   printf("quitting the program.....\n");
}


    return 0;
}
