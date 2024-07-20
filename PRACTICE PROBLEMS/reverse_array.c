#include <stdio.h>
int main()
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array in reverse order : ");

    for (i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    int temp;
    for (i = 0; i <= (size / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    printf("\n");

    printf("Corrected method : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}