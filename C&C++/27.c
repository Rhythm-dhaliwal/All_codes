#include<stdio.h>
int main()

{
    int arr[]={1,2,3,4,56};
    printf("value at position 0 at array is %d\n",*(&arr[0]));
    printf("value at position 0 at array is %d\n",arr[0]);
printf("the address of first element of array is %d\n",*(arr));
 printf("value at position 1 at array is %d\n",*(&arr[1]));
  printf("value at position 1 at array is %d\n",arr[1]);
printf("the address of second element of array is %d\n",*(arr+1));
    printf("value at position 2 at array is %d\n",*(&arr[2]));
  printf("value at position 2 at array is %d\n",arr[2]);
printf("the address of third element of array is %d\n",*(arr+2));
 return 0;
}
