#include <stdio.h>

int main()
{
    int size1, size2, i;
    printf("Enter the size of array1 : ");
    scanf("%d", &size1);
    printf("Enter the size of array2 : ");
    scanf("%d", &size2);
    int array1[size1], array2[size2];
    printf("Enter array1 elements : ");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Enter array2 elements : ");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &array2[i]);
    }

    // Maximum size of the merged array can be the sum of both arrays
    int mergedArray[size1 + size2];
    int mergedSize = 0;

    // Add all elements of the first array to the merged array
    for (int i = 0; i < size1; i++)
    {
        mergedArray[mergedSize++] = array1[i];
    }

    // Add elements of the second array to the merged array if they are not already present
    for (int i = 0; i < size2; i++)
    {
        int flag = 0;

        // Check if the current element of array2 is already in mergedArray
        for (int j = 0; j < mergedSize; j++)
        {
            if (array2[i] == mergedArray[j])
            {
                flag = 1;
                break;
            }
        }

        // If the element is not a duplicate, add it to the merged array
        if (flag == 0)
        {
            mergedArray[mergedSize++] = array2[i];
        }
    }

    // Print the merged array
    printf("Merged array without repetitions: ");
    for (int i = 0; i < mergedSize; i++)
    {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
