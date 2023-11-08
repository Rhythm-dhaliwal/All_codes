#include <stdio.h>
void aryrev(int arr[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}
void printarg(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    printf("Before reversing...\n");
    printarg(arr);
    aryrev(arr);
    printf("After reversing...\n");
    printarg(arr);
    printf("\n\nTHIS PROGRAM IS MADE BY:\n\nRHYTHM DHALIWAL\nIT (SHIFT-2)\n");
    return 0;
}
