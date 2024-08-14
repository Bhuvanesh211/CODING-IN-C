#include<stdio.h>

int main()
{
    int num;
    printf("Enter Number:");
    scanf("%d",&num);
    for (int i = 31;i>=0; i--)
    {
        // if(1&(num>>i))
        // {
        //     printf("1 ");
        // }    
        // else
        // {
        //     printf("0 ");
        // }  
        printf("%d ",(num>>i)&1);
    }
    
}