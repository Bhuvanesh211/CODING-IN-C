#include<stdio.h>
int main()
{
    int size;
    printf("size:");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int count=0;
    int target_value;
    printf("Target_value:");
    scanf("%d", &target_value);
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if((arr[i]-arr[j])==target_value)
            {
                count++;
            }
             if((arr[j]-arr[i])==target_value)
            {
                count++;
            }
        }
        
    }
    printf("Number of pairs with difference:%d",count);
    
}