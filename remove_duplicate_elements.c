#include <stdio.h>
int main()
{
    int size, i, j;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arr2[size];
    int new_size = 0;
    int flag;
    for (i = 0; i < size; i++)
    {
        flag = 0;
        for (j = 0; j < new_size; j++)
        {
            if (arr[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            arr2[new_size++] = arr[i];
        }
    }
    printf("Removed duplicate elements : ");
    for (i = 0; i < new_size; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}