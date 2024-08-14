#include<stdio.h>
int main()
{
    int num,i=0;
    char arr[50];
    printf("Enter deciaml Number:");
    scanf("%d",&num);
    
    int rem;
    while (num)
    {
        rem=num%16;
        if(rem<10)
        {
            arr[i++]=rem+48;
        }
        else{
            arr[i++]=rem+55;
        }
        num=num/16;

    }
    arr[i]= '\0';
    for(int j=i;j>=0;j--)
    {
        printf("%c",arr[j]);
    }
    
}