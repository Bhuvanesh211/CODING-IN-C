#include<stdio.h>
int main()
{
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int value,pos;
    printf("Enter value and pos:");
    scanf("%d %d",&value,&pos);
    int i;
    if(pos<size)
    {
        for(i=size;i>pos;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[pos]=value;
    }
    else{
        printf("Invalid ");
        return 0;
    }
    for (int i = 0; i <= size; i++)
    {
    printf("%d ",arr[i]);
    }
    
    
}