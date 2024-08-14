// Online C compiler to run C program online
#include <stdio.h>
void sort(int *arr,int size)
{
    int count0=0,count1=0,count2=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        count0++;
        else if(arr[i]==1)
        count1++;
        else 
        count2++;
    }
    int i=0;
    while(count0>0)
    {
    arr[i++]=0;
    count0--;
    
    }
    while(count1>0)
    {
    arr[i++]=1;
    count1--;
    }
    while(count2>0)
    {
    arr[i++]=2;
    count2--;
    }
}
int main() {
    // Write C code here
int size=5;
int arr[5]={1,0,2,0,1};
sort(arr,size);
for(int i=0;i<size;i++)
{
    printf("%d ",arr[i]);
}
    return 0;
}