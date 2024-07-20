#include <stdio.h>

// Function to add two matrices
void addMatrices(int rows, int cols, int A[][cols], int B[][cols], int C[][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int rows, int cols, int A[][cols], int B[][cols], int C[][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int rows1, int cols1, int A[][cols1], int cols2, int B[][cols2], int C[][cols2])
{
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int matrix[][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows1, cols1, rows2, cols2;

    printf("Enter number of rows and columns for matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter number of rows and columns for matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    int A[rows1][cols1], B[rows2][cols2], C[rows1][cols2];

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Example usage
    addMatrices(rows1, cols1, A, B, C);
    printf("Addition:\n");
    displayMatrix(rows1, cols1, C);

    return 0;
}
