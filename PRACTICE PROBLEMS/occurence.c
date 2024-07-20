#include <stdio.h>
int main()
{
    int size, i, j, occurence = 0;
    printf("Enter the size : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        int count = 0;
        for (j = i; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            occurence++;
        }
    }
    printf("Total number occured more than once is %d", occurence);
    return 0;
}