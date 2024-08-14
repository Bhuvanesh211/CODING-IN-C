#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf( "Enter the elements of array: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
     int i, k = 0, l = 0;
    while (k < r && l < c)
    {
        for (int i = l; i < c; ++i)
        {
            printf("%d ", arr[k][i]);
        }
        k++;
        for (int i = k; i < r; ++i)
        {
            printf("%d ", arr[i][c - 1]);
        }
        c--;
        
            for(int i=c-1;i>=l;--i)
            {
                printf("%d ", arr[r-1][i]);
            }
            r--;
        
       
            for(int i=r-1;i>=k;--i)
            {
            printf("%d ", arr[i][l]);
            }
            l++;
        
    }
}
