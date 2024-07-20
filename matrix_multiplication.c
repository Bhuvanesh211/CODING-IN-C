#include <stdio.h>
int main()
{
    int rows, cols, i, j, k;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    printf("Enter the number of cloumns : ");
    scanf("%d", &cols);
    int A[rows][cols], B[rows][cols], C[rows][cols];
    printf("Enter the elements of A matrix : ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements of B matrix : ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            C[i][j] = 0;
            for( k = 0; k < cols;k++)
            {
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
            }
        }
    }
    printf("Multiplication of matrix A and B is : ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", C[i][j]);
        }
    }
    return 0;
}
