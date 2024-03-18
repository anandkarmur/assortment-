#include <stdio.h>

int main()
{
    int size;

    
    printf("Enter the array's size: ");
    scanf("%d", &size);
    
    
    int array[100]; 

    
    printf("\nEnter array's elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }


    printf("\nNegative elements from an Array: ");
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0)
        {
            if (found)
                printf(", ");
            printf("%d", array[i]);
            found = 1;
        }
    }
    printf("\n");

    return 0;
}
