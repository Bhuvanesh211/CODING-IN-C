#include <stdio.h>
#include <limits.h>
int main()
{
    int size, i;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest, second, third, fourth;
    largest = second = third = fourth = INT_MIN;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            fourth = third;
            third = second;
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            fourth = third;
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second && arr[i] != largest)
        {
            fourth = third;
            third = arr[i];
        }
        else if (arr[i] > fourth && arr[i] != third && arr[i] != second && arr[i] != largest)
        {
            fourth = arr[i];
        }
    }
    printf("Fourth largest element is : %d , %d , %d , %d", fourth,third,second,largest);
    return 0;
}