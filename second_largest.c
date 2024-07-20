#include <stdio.h>
#include <limits.h>
int main()
{
    int size, i;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest, second_largest;
    largest = second_largest = INT_MIN;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if ((arr[i] > second_largest) && (arr[i] != largest))
        {
            second_largest = arr[i];
        }
    }
    printf("Second largest is : %d ", second_largest);
    return 0;
}