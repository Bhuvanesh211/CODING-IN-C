#include <stdio.h>
#include <limits.h>

int main()
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 2)
    {
        printf("Array needs to have at least two elements.\n");
        return 1;
    }

    int arr[size];
    printf("Enter the array elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN)
    {
        printf("There is no second largest element.\n");
    }
    else
    {
        printf("The second largest element is %d\n", second_largest);
    }

    return 0;
}
