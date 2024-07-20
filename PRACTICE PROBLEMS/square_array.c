#include <stdio.h>
#include <math.h>

void display_elements(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
}

void square_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = pow(*(arr + i), 2);
    }
}

int main()
{
    int size, i;
    printf("Enter the array size : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array elements before squaring : ");
    display_elements(arr, size);

    square_array(arr, size);

    printf("\nArray elements after squaring : ");
    display_elements(arr, size);
    return 0;
}