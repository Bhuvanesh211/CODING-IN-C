#include <stdio.h>

int main()
{
    int r = 3, c = 3;
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c / 2; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[i][c - j - 1];
            a[i][c - j - 1] = temp;
        }
        printf("\n");
    }
       for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}