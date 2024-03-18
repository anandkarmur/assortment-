#include <stdio.h>

int main()
{
    int rows, cols;

    
    printf("Enter the array's row & column size: ");
    scanf("%d", &rows);
    cols = rows;

    
    int array[rows][cols];

    
    printf("\nEnter array's elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    
    printf("\nThe transpose matrix of an array:\n");
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
