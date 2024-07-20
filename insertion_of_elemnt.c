#include <stdio.h>
int main()
{
    int size, i, pos, element;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to be inserted : ");
    scanf("%d", &pos);
    printf("Enter the element to be inserted at the position : ");
    scanf("%d", &element);
    for (i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    size++;

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}