#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Halistone Number %d,",num);
    while(num!=1)
    {
        if(num%2==0)
        {
            num=num/2;
            printf("%d,",num);
        }
        else if(num%2!=0)
        {
            num=(num*3)+1;
            printf("%d,",num);
        }
    }
}