#include <stdio.h>
#include <limits.h>
int main()
{
    int size, i;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest, second, third;
    largest = second = third = INT_MIN;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            third = second;
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second && arr[i] != largest)
        {
            third = arr[i];
        }
    }
    printf("Third largest element in the array : %d", third);
    return 0;
}