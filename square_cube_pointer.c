#include <stdio.h>

void square_cube(int *arr, int size, int *square, int *cube)
{
    int i;
    for (i = 0; i < size; i++)
    {
        square[i] = arr[i] * arr[i];        // Store square of the element
        cube[i] = arr[i] * arr[i] * arr[i]; // Store cube of the element
    }
}

int main()
{
    int i, size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arr[size], square[size], cube[size];
    printf("Enter array elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    square_cube(arr, size, square, cube);
    printf("Square of array elements is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", square[i]);
    }
    printf("\nCube of array elements is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", cube[i]);
    }

    return 0;
}
