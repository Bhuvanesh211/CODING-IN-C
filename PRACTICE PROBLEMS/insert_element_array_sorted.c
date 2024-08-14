#include<stdio.h>
int main()
{
    int size,i=0,j=0;
    printf("Enter size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int newvalue;
    printf("Enter value :");
    scanf("%d",&newvalue);
    for(i=0;i<size;i++)
    {
        if(arr[i]>newvalue)
        {
            break;
        }
    }
    for(j=size;j>i;j--)
    {
        arr[j]=arr[j-1];
    }
    arr[i]=newvalue;
    printf("\nNew Array is:\n");
    for(int k=0;k<=size;k++)
    {
        printf("%d ",arr[k]);
    }

}