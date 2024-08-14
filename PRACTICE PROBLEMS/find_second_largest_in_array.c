//find second largest element in array

#include<stdio.h>
int main()
{
    int size=5;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int s_largest=arr[1];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            s_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && s_largest>arr[i])
        {
            s_largest=arr[i];
        }
    }
    printf("Largest:%d\nSecond Largest:%d\n",largest,s_largest);
}