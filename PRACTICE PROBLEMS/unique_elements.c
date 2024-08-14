#include <stdio.h>
int main()
{
    int size;
    printf("Enter Size:");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("\n%d Enter Elements: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int i,j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
                break;
        }
        if (j == size)
        {
            printf("\nunique elements in an array is  : %d \n", arr[i]);
        }
    }
}