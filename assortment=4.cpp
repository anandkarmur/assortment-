#include <stdio.h>

int main()
{
    int rows, cols;

    
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

   
    int array[100][100]; 

    
    printf("\nEnter array's elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    
    int row_num;
    printf("\nEnter row number: ");
    scanf("%d", &row_num);
    
   
    printf("Elements of row %d: ", row_num);
    int row_sum = 0;
    for (int j = 0; j < cols; j++)
    {
        printf("%d", array[row_num][j]);
        row_sum += array[row_num][j];
        if (j < cols - 1)
            printf(", ");
    }
    printf("\nThe sum of row %d: %d\n", row_num, row_sum);

    
    int col_num;
    printf("\nEnter column number: ");
    scanf("%d", &col_num);

    
    printf("Elements of column %d: ", col_num);
    int col_sum = 0;
    for (int i = 0; i < rows; i++)
    {
        printf("%d", array[i][col_num]);
        col_sum += array[i][col_num];
        if (i < rows - 1)
            printf(", ");
    }
    printf("\nThe sum of column %d: %d\n", col_num, col_sum);

    return 0;
}
