// #include <stdio.h>
// int main()
// {
// char a[100];
// printf("ENTER THE MASSAGE HERE...\n");
// gets(a);

// printf("THE SECRET MESSAGE IS CREATED\n%x",a);
// return 0;
// }

#include <stdio.h>
int main()
{

    for (int i = 0; i < 100; i++)
    {
        {
            int ch; // variable declaration
            printf("Enter a number\nenter q to quit\n");
            scanf("%d", &ch); // user input
            printf("\n The ascii value of the ch variable is : %c\n", ch);
        }
    }

end:
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int sum=0;  // variable initialization
//     char name[20];  // variable initialization
//     int i=0;  // variable initialization
//     printf("Enter a name: ");
//     scanf("%s", name);
//     while(name[i]!='\0')  // while loop
//     {
//         printf("\nThe ascii value of the character %c is %d", name[i],name[i]);
//         sum=sum+name[i];
//         i++;
//     }
//     printf("\nSum of the ascii value of a string is : %d", sum);
//     return 0;
// }