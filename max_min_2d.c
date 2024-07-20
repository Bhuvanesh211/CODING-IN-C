#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]); 
        }
    }

    int min = arr[0][0];
    int max = arr[0][0];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    printf("Largest element in the array: %d\n", max); // Corrected to max
    printf("Smallest element in the array: %d", min);  // Corrected to array and min

    return 0;
}
