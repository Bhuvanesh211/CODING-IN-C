// transpose of array

#include <stdio.h>
int main()
{
    int r = 3, c = 3;

    int arr[r][c], transpose[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("arr[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Your Array \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }
    printf("Transpose Array \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", transpose[i][j]);
        }
        printf("\n");
    }
}