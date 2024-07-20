#include <stdio.h>

void print_array(int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(arr + i));
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Elements in the array : ");
    print_array(arr);
    return 0;
}
