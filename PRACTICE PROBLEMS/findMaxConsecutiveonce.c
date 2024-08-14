#include<stdio.h>
int maxConsecutive(int *arr,int size)
{
    int max=0,count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==1)
        {
            count++;
            if(count>max)
            {
                max=count;
            }
        }
        else{
            count=0;
        }
    }
    return max;
}
int main()
{
    int size;
    printf("Enter Size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Maximum Consecutive of once is:%d",maxConsecutive(arr,size));

}