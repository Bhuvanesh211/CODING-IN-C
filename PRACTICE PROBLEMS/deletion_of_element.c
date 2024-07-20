#include <stdio.h>
int main()
{
    int size, i, pos;
    printf("Ente the size of thne array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter tha array elements : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element to be deleted : ");
    scanf("%d", &pos);
    if (pos < 1 || pos > size - 1)
    {
        printf("Invalid option");
        return 1;
    }
    for (i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}