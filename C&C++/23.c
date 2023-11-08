#include <stdio.h>
int main()
{
    int marks[2][4] = {{45, 54, 21, 12}, 
                       {34, 43, 67, 76}};
    {
        // for (int i = 0; i < 4; i++)
        // {
        //     printf("ENTER THE %d OF STUDENT\n", i);
        //     scanf("%d", &marks[i]);
        // }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                //printf("the marks of student %d,%d is %d\n", i,j, marks[i][j]);
                printf("%d ",marks[i][j]);
            }
            printf("\n\n");
            
           
        }
    }
    // marks[0]=10;
    // printf("Marks of student 0 is %d\n",marks[0]);
    return 0;
}