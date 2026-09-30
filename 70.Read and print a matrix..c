#include <stdio.h>

int main()
{
    int matrix[10][10], rows, columns, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}