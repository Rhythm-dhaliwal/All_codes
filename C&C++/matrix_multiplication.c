#include <stdio.h>

int main()

{
    int i, j, k, row, column, number_of_element;
    int matOne[10][10], matTwo[10][10], matThree[10][10];

    printf("ENTER THE NUMBER OF ROWS:");
    scanf("%d", &row);

    printf("\nENTER THE NUMBER OF COLUMN:");
    scanf("%d", &column);

    number_of_element = row * column;

    printf("\nEnter The %d elements Of First Matrix:\n", number_of_element);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &matOne[i][j]);
        }
    }

    printf("\nEnter %d Elements For Second Matrix:\n", number_of_element);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &matTwo[i][j]);
        }
    }
    // multiplying two matrices...
    printf("\nmultiply of the matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            matThree[i][j] = 0;
            for (k = 0; k < column; k++)
            {
                matThree[i][j] += matOne[i][k] * matTwo[k][j];
            }
        }
    }
    // for printing result
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d\t", matThree[i][j]);
        }
        printf("\n");
    }
    printf("\n\nTHIS PROGRAM IS MADE BY:\n\nRHYTHM\nIT (SHIFT-2)");
    return 0;
}
