#include<stdio.h>
int main()
{
    int size,i,largest,smallest;
    printf("Enter the array size : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements : ");
    for( i = 0;i < size;i++)
    {
        scanf("%d",&arr[i]);
    }

    arr[largest] = arr[smallest] = arr[0];
    for(i = 0; i < size;i++)
    {
        if(arr[i] > arr[largest])
        {
            arr[largest] = arr[i];
        }
        if(arr[i] < arr[smallest])
        {
            arr[smallest] = arr[i];
        }

    }
    printf("Smallest elemnt in the array : %d\n",arr[smallest]);
    printf("Largest element in the array : %d",arr[largest]);

    return 0;
}