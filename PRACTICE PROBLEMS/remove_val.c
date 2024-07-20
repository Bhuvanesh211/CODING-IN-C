#include<stdio.h>
int main()
{
    int size,i,k,val;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Ente the arry elements : ");
    for(i = 0; i < size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to removed : ");
    scanf("%d", &val);
    k = 0;
    for( i =0; i < size ;i++)
    {
        if(arr[i] != val)
        {
            arr[k++] = arr[i];
        }
    }
    for(i = 0; i < k;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}