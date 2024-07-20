#include<stdio.h>
int main()
{
    int size,i,count=0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the numbers : ");
    for( i =0;i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int n;
    printf("Enter the number to be cunted: ");
    scanf("%d", &n);

    for( i = 0; i<size; i++)
    {
        if(arr[i] == n )
        {
            count++;
        }
    }

    printf("The number %d occured is %d", n, count);
    return 0;
}